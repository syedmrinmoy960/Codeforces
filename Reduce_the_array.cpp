/*
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
#define pll pair<ll,ll>
#define v vector<ll>
#define st stack<ll>
#define pq  priority_queue <int>
#define q queue<ll>
#define mod 1000000005
ll arr[1000005];
// int ans=__builtin_popcount(n);
//ith bit on =(n|(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;


int main(){

 ios::sync_with_stdio(0);
   cin.tie(0),cout.tie(0);
//cout<<setprecision(6)<<fixed;
    int t;
     cin>>t;
    
     while(t--){
          ll n;
          cin>>n;
           priority_queue<ll>ans;
          for(int i=0;i<n;i++){
              int x;
              cin>>x;
              ans.push(-x);
          }
          ll res=0;
         
        while ( ans.size() > 1 ) {
			ll a = -ans.top();
			ans.pop();
 
			ll b = -ans.top();
			ans.pop();
 
			ans.push ( - (a + b) );
			res += (a+b);
		}
          
          cout<<res<<endl;
     }
      
     
     return 0;
}