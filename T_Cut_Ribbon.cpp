
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
const int mix=1e6+10;
ll arr[mix];
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
//  vector<bool>vis(1e6+1);
// void sieve(int n,vector<int>&prime){
//        // vector<bool>vis(n+1);
//      for(int i=3;1ll*i*i<=n;i+=2){
//          if(!vis[i]){
//             for(int j=i*i;j<=n;j+=(i<<1)){
//                 if(!vis[j]){
//                     vis[j]=1; 
//                 }
//             }
//          }
//      }
//      //prime.pb(2);
//      for(int i=3;i<=n;i+=2){
//          if(!vis[i]){
//              prime.pb(i);
//          }
//      }
// }

int main(){

 ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
     
    //  vector<int>prime;
    //  sieve(1e6,prime);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for (int x = 0; x <= 4000;x++){
        for (int y = 0; y <= 4000;y++){
            int zc = n - (x * a + y * b);
            double z = (zc / (double)c);
            if(z<0)
                break;
             if(z==(int)z){
                 ans = max(ans, (int)z + y + x);
            }
        }
    }
    cout << ans << endl;

    return 0;
}