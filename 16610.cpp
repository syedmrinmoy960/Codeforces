/*In The Name Of ALLAH
*Bismillahir Rahmanir Rahmin
* @Author: {{Syed Yasir Shahriar
          ID: 19-40656-1 
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
#define endl "\n"
#define pll pair<ll,ll>
#define vv vector<ll>
#define st stack<ll>
#define pq  priority_queue <int>
#define qq queue<ll>
#define mod 1e9+7
const int mix=1e6+10;
ll arr[mix];
// vector<int>divisors[mx];
// int ans=__builtin_popcount(n);
//ith bit on =(n|(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;   

    vector<ll>v1;
    vector<ll>v2;

void solve(){
       ll n,res=0;
     	 cin>>n;
     	 for(int i=0;i<n;i++){
     	 	  ll x;cin>>x;
     	 	  v1.pb(x);
     	 }
     	 for(int j=0;j<n;j++){
     	 	  ll y;cin>>y;
     	 	  v2.pb(y);
     	 }

     	 for(int i=0;i<n;i++){
     	 	 if(v1[i]>v2[i]){
     	 	 	 swap(v1[i],v2[i]);
     	 	 }

     	 }

           for(int i=0;i<n;i++){

             res+=abs(v1[i]-v1[i+1])+abs(v2[i]-v2[i+1]);///1 
           }
     	 cout<<res<<endl;
}
int main(){
    
ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
   


     int t=1;cin>>t;
     while(t--){
     	 

        solve();
     }

  
      
         
  return 0;
}