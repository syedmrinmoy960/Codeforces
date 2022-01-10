//Name: Syed Yasir Shahriar
//ID :19-40656-1
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

// vector<int>divisors[mx];
// int ans=__builtin_popcount(n);
//ith bit on =(n(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;

// ll gcd(ll a,ll b){
//     if(b==0)
//       return a;
//       else
//         return gcd(b,a%b);
// }

// sieve function :
//Bitwise sieve ::

vector<int>bitwiseSieve(int n){

   vector<int>prime,status((n+31)/32);
   for(int i=3;i*i<n;i+=2){
      for(int j=(i*i);j<=n;j+=(i<<1)){
         int idx= j>>5 , bit= j & 31;
         status[idx] |= (1<<bit);
      }
   }
   prime.pb(2);
   for(int i=3;i<=n;i+=2){
      int idx= i>>5 ,bit=i & 31;
      if((status[idx] & (1<<bit))==0){
        prime.pb(i);
      }
   }

   return prime;
}

int main(){

 ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);

   vector<int>prime = bitwiseSieve(1e8);
    for(int i=0;i<prime.size();i+=100){
        cout<<prime[i]<<endl;
    }


     return 0;
}
