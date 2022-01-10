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
ll arr[1000005];
// int ans=__builtin_popcount(n);
//ith bit on =(n|(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;

     
int main(){

//   ios::sync_with_stdio(0);
//     cin.tie(0),cout.tie(0);       
     
     ll t;
     cin>>t;
     while(t--){
         ll n;
         cin>>n;
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         ll ans=0;
         for(int i=1;i<n;i++){
             ans=max(ans,arr[i]*arr[i-1]);
         }
         cout<<ans<<endl;
     }
      



         
    return 0;
}