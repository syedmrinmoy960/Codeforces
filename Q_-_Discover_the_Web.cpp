/*In The Name Of ALLAH
*Bismillahir Rahmanir Rahmin
* @Author: Syed Yasir Shahriar
     ID   : 19-40656-1
     UNI   : AIUB 
       DEPT : BSC,CSE
{
/*//*\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\*/
//أعوذ بالله من الشيطان الرجيم
//بسم الله الرحمن الرحيم
/*//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double;
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
//const ld pii=acos(-1.0);
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
    
  int t;
    cin>>t;
    string str,k,current;
//    current ="http://www.lightoj.com/";
    stack<string>f;
    stack<string>b;
    getline(cin,str);
    for(int i=1; i<=t; i++)
    {
        current ="http://www.lightoj.com/";

      while(!f.empty())
        {

            f.pop();
        }

        while(!b.empty())
        {

            b.pop();
        }

        cout<<"Case"<<" "<<i<<":"<<endl;
        while(getline(cin,str))
        {

            if(str=="QUIT")
                break;

            if(str=="FORWARD")
            {

                if(f.empty())
                {

                    cout<<"Ignored"<<endl;
                    continue;
                }
                b.push(current);

                current=f.top();

                cout<<current<<endl;
                f.pop();
            }
            else if(str=="BACK")
            {

                if(b.empty())
                {

                    cout<<"Ignored"<<endl;
                    continue;
                }
                f.push(current);

                current=b.top();

                cout<<current<<endl;
                b.pop();
            }

            else
            {

                b.push(current);
                string s1;
                stringstream ss(str);
                ss>>s1>>s1;
                current= s1;
                cout<<current<<endl;
                while(!f.empty())
                {

                    f.pop();
                }

            }

        }

    }
        
  return 0;
}