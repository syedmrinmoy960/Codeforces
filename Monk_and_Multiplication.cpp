/*
*Bismillahir Rahmanir Rahmin
* @Author: {{Syed Yasir Shahriar
{
/*//*\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\*/

//أعوذ بالله من الشيطان الرجيم
//بسم الله الرحمن الرحيم
 
/*//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pll pair<ll,ll>
#define v vector<ll>
#define st stack<ll>
#define pq  priority_queue <int>
#define q queue<ll>
#define mod 1000000005
ll arr[1000005];
// int ans=__builtin_popcount(n);
//ith bit on =(n|(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;


int main(){

 ios::sync_with_stdio(0);
   cin.tie(0),cout.tie(0);
//cout<<setprecision(6)<<fixed;
     int n;
     cin>>n;

     priority_queue<ll>ans;
     vector<ll>v1;

      for(int i=0;i<n;i++){
           ll x;
           cin>>x;
           v1.pb(x);
         
      }

    //  while(!ans.empty()){
    //       cout<<ans.top()<<endl;
    //       ans.pop();
    //  }

      for(int i=0;i<n;i++){
            ans.push(v1[i]);
          if(ans.size()>=3){
              ll n1=ans.top();
              ans.pop();
              ll n2=ans.top();
              ans.pop();
              ll n3=ans.top();
              ans.pop();

              cout<<(n1*n2*n3)<<endl;

              ans.push(n1);
               ans.push(n2);
                ans.push(n3);


          }
          else{
              cout<<"-1"<<endl;
          }
      }


      
     
     return 0;
}