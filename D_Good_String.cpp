
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
  string str;
int main(){

 ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
     
    //  vector<int>prime;
    //  sieve(1e6,prime);
     int n;
     cin >> n;
     
     while(n--){
         int k,cnt1=0,cnt2=0;
         cin >> k;
         cin >> str;
         for (int i = 0; i < str.length();i++){
              if(str[i]=='<'){
                  cnt1++;
              }
              else
                  break;
         }
         for (int i = k - 1; i >= 0;i--){
             if(str[i]=='>'){
                 cnt2++;
             }
              else
                  break;
         }
         cout << min(cnt1, cnt2) << endl;
     }

     return 0;
}