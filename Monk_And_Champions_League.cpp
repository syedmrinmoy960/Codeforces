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
    
     int m,n;
     cin>>m>>n;
      priority_queue<ll>ans;

      for(int i=0;i<m;i++){
          int x;
          cin>>x;
          ans.push(x);
      }
       ll  res=0; 

      //cout<<ans.size()<<endl;

      for(int i=0;i<n;i++){
          
            if(!ans.empty()){
                ll sum=ans.top();
                ans.pop();
                res+=sum;
                sum--;
               if(sum>0){
                   ans.push(sum);
               }
           }
          
            //cout<<res<<endl;
      }
      cout<<res<<endl;
      
      
     
     return 0;
}