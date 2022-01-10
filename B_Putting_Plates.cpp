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
//ll arr[1000005];
// int ans=__builtin_popcount(n);
//ith bit on =(n|(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;
// bool prime(int n)
// {
//     if(n<2)return false;
//     if(n<=3)return true;
//     if(n%2==0)return false;
//     for(int i=3;i*i<=n;i+=2)
//     {
//         if(n%i==0)return false;
//     }
//     return true;
// }
 
// Graph Grid //
// int dx[]={-1,0,1,0};
// int dy[]={0,1,0,-1};
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ar[n+3][m+3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)ar[i][j]=0;
        }
       for(int i=0;i<m;i+=2)ar[0][i]=1;
       for(int j=2;j<n;j+=2)
       {
           ar[j][0]=1;
           ar[j][m-1]=1;
       }
       for(int i=2;i<m-2;i+=2)ar[n-1][i]=1;
 
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)cout<<ar[i][j];
           cout<<endl;
       }
       
     
    }
    return 0;
 
}