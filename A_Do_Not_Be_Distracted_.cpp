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
string str;


int main(){

 ios::sync_with_stdio(0);
   cin.tie(0),cout.tie(0);
//cout<<setprecision(6)<<fixed;
   int t;
   cin>>t;
   while(t--){
        ll n;
        cin>>n;
        cin>>str;

        map<char,int>m1;
        int res=0;
        for(int i=0;i<str.length();i++){
             m1[str[i]]++;

             char ch=str[i];

             while(str[i]==ch){
                 i++;
             }
             i--;
             if(m1[ch]>1)
              res=1;
             //cout<<"NO"<<endl;

        }

        if(res==1)
         cout<<"NO"<<endl;
         else
         cout<<"YES"<<endl;
   }
      
     
     return 0;
}