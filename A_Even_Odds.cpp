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
string n,k;
     
int main(){

   ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);       
  //std::cout << std::setprecision(6);
    ll n,k,res=0;
    cin>>n>>k;
      if(n%2==0){
        res=n/2;
      }
      else{
          res=(n+1)/2;
      }
      if(k<=res){
          cout<<(k*2)-1;
      }
      else{
          cout<<(k-res)*2<<endl;
      }
      



         
    return 0;
}