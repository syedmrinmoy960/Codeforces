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
    //ll t;
      int n;
      cin>>n;
      for(int i=0;i<2*n;i++){
          cin>>arr[i];
      }
      sort(arr,arr+2*n);
    //    for(int i=0;i<2*n;i++){
    //        cout<<arr[i]<<" ";
    //    }
       int k=(2*n);
       int sum1=0;
       int sum2=0;
       for(int i=0;i<n;i++){
           sum1+=arr[i];
       }
       for(int i=n;i<k;i++){
           sum2+=arr[i];
       }             //O(N)
 
      if(sum1==sum2){
          cout<<"-1"<<endl;
          return 0;
      }
       else{
           for(int i=0;i<k;i++){
               cout<<arr[i]<<" ";
           }
           cout<<endl;
       }
       

     
     return 0;
}