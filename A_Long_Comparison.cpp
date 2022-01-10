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

string str1, str2;
int main(){    
ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
    
    int t;
    cin >> t;
    while(t--){
      int p1, p2;
      cin >> str1 >> p1 >> str2 >> p2;
      int len1 = str1.length();
      int len2 = str2.length();
      if(len1+p1>len2+p2){
        cout << ">" << endl;
      }
       else if(len1+p1<len2+p2){
         cout << "<" << endl;
       }
       else{
         if(len2>len1){
           int dif1 = (len2 - len1);
           for (int i = 0; i < dif1;i++){
             str1 += '0';
           }
         }
          else{
            int dif2 = (len1 - len2);
            for (int i = 0; i < dif2;i++){
              str2 += '0';
            }
          }

          if(str1>str2){
            cout << ">" << endl;
          }
           else if(str1<str2){
             cout << "<" << endl;
           }
           else{
             cout << "=" << endl;
           }
        
           
      }


       }
    }

    
