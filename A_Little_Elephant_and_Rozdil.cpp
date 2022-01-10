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
    int t,j;

     cin>>t;
    
     vector<ll>ans;
    for(int i=0;i<t;i++){
        ll x;
        cin>>x;
         ans.pb(x);
    }

     ll mini=INT_MAX;

      ll res=0;

      for(int i=0;i<t;i++){
           if(ans[i]<mini){
               mini=ans[i];
              j=i;
           }
      }
      for(int i=0;i<t;i++){
          if(mini==ans[i]){
              res++;
          }
      }

      if(res>1){
          cout<<"Still Rozdil"<<endl;
      }
       else{
           cout<<j+1<<endl;
       }


      
     
     return 0;
}