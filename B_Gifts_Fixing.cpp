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
     int  t;

      cin>>t;
      while(t--){
           ll n;
           cin>>n;
           ll ans1[n+1];
           ll ans2[n+1];
            ll mini=INT_MAX;
           ll muna= INT_MAX;
           for(int i=0;i<n;i++){
               cin>>ans1[i];
               mini=min(mini,ans1[i]);
           }
           for(int i=0;i<n;i++){
               cin>>ans2[i];
               muna=min(muna,ans2[i]);
           }
           
           ll ans=0;
          for(int i=0;i<n;i++){
               ans+=max(ans1[i]-mini,ans2[i]-muna);
          }

          cout<<ans<<endl;
        
       
      }
      
     
     return 0;
}