/*In The Name Of ALLAH
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
// int const mx = 1e6 + 1;
// bitset<mx> vis;
vector<bool> vis(1e6 + 2);
void sieve(int n,vector<int>&prime){

    for (int i = 2; i * i < n;i++){
        if(!vis[i]){
            for (int j = (i * i); j <= n;j+=i){
                vis[j] = 1;
            }
        } 
    }
    for (int i = 0; i < n;i++){
        if(!vis[i]){
            prime.pb(i);
        }
    }
}
 
int main(){
 
 ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);

//   vector<int> prime;
//   sieve(1e6,prime);
//   int m;
//   cin >> m;
//   if (m == 1 || m == 2)
//       cout << 1 << endl;
//   else
//       cout << 2 << endl;

//   for (int i = 2; i <= m + 1; i++)
//   {
//       if (!vis[i])
//           cout << 1 << " ";
//       else
//           cout << 2 << " ";
//      }
//      cout << endl;
        