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
           ll ans[n+1];
           for(int i=0;i<n;i++){
                cin>>ans[i];
           }
           sort(ans,ans+n);
           ll mini=ans[n-1] -ans[0];
           //ll res=0;
           for(int i=0;i<n;i++){
               for(int j=i+1;j<n;j++){
                    mini=min(mini,ans[j]-ans[i]);
               }
           }
           cout<<mini<<endl;
      }
      
     
     return 0;
}