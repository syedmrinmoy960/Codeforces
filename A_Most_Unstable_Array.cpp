 /*In the Name of ALLAH
*Bismillahir Rahmanir Rahmin
* @Author: Syed Yasir Shahriar
*  ID    : 19-40656-1
{
 /*//*\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\*/
     
//أعوذ بالله من الشيطان الرجيم
//بسم الله الرحمن الرحيم
     
/*//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\*/
#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1)
#define pb push_back
#define ff first
#define ss second
#define pll pair<ll,ll>
#define v vector<ll>
#define st stack<ll>
#define pq  priority_queue <int>
#define q queue<ll>
#define endl "\n"
#define MOD ((int)1e9 + 7)
int arr[1000005];
// int ans=__builtin_popcount(n);
//ith bit on =(n|(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;
void sieve(int n,vector<int>&prime){
 vector<bool>vis(n+1);
   for(int i=3;1ll*i*i<=n;i+=2){
      if(!vis[i]){
        for(int j=i*i;j<=n;j+=(i<<1)){
             vis[j]=1; 
          }
     }
 }
   prime.pb(2);
   for(int i=3;i<=n;i+=2){
      if(!vis[i]){
          prime.pb(i);
      }
   }
}
     
int main(){

  ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);       
  //std::cout << std::setprecision(6);
      int n;
      cin>>n;
      vector<int>prime;

      sieve(n,prime);
      for(auto u:prime) cout<<u<<" ";
       cout<<endl;
      



         
    return 0;
}