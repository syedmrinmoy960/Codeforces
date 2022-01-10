
/*In The Name Of ALLAH
*Bismillahir Rahmanir Rahmin
* @Author: Syed Yasir Shahriar ID - 19-40656-1
* University - AIUB 
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
// const int mix=3e3+10;
// ll arr[mix];
// vector<int>divisors[mx];
// int ans=__builtin_popcount(n);
//ith bit on =(n|(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;

// ll gcd(ll a,ll b){
//     if(b==0)
//       return a;
//       else
//         return gcd(b,a%b);
// }

// sieve function :
vector<int> vis(3e3 + 2);
//vector<int> prime;
vector<int>PrimeFactors[(int)3e3];
void sieve(int n,vector<int>&prime){
    for(int i=3;1ll*i*i<=n;i+=2){
        if(!vis[i]){
            for(int j=(i*i);j<=n;j+=(i<<1)){
                if(!vis[i]){
                  vis[j]=1;

                }
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
     
    int lim=3e3;
   vector<int> prime;
   sieve(lim,prime);

   for(auto u:prime){
     for(int i=u;i<=lim;i+=u){
            
        PrimeFactors[i].pb(u);
     }
   }
   ll cnt = 0,n;
   cin >> n;
   for (int i = 1; i <= n;i++){
       if(PrimeFactors[i].size()==2){
           cnt++;
       }
   }
   cout << cnt << endl;

   return 0;
}