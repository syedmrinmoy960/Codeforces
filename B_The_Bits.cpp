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
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;

    ll k=0,x=0,y=0,z=0;
     
     for(int i=0;i<n;i++){
        if(s1[i]=='0' && s2[i]=='0'){
           k++;
        }
        if(s1[i]=='0' && s2[i]=='1'){
           x++;
        }
        if(s1[i]=='1' && s2[i]=='0'){
          y++;
        }
         if(s1[i]=='1' && s2[i]=='1'){
           z++;
         }
     }
     //cout<<k<<" "<<x<<" "<<y<<" "<<z<<endl;      
      
      cout<<(k*(y+z)+x*y)<<endl;
     
     return 0;
}