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
    cin>>n;
      int x=0,f=0,y=0,z=0,m=0;
    while(n--){
        int a,b;
       
        cin>>a>>b;
        

        if(a==b)
           f++;
           if(a==0)
              x++;
              if(a==1)
                 y++;
                 if(b==0)
                   z++;
                   if(b==1)
                      m++;
       
    }

     int ans1=min(x,y);
     int ans2=min(z,m);
      int final=(ans1+ans2);
       cout<<final<<endl;
     
     return 0;
}