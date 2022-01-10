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

     
int main(){

//   ios::sync_with_stdio(0);
//     cin.tie(0),cout.tie(0);       
     
     int t;
      cin>>t;
      while(t--){
          int r1,w1,c1,r2,w2,c2;
           cin>>r1>>w1>>c1;
            cin>>r2>>w2>>c2;
            int res1=0,res2=0;
           if(r1>r2)
              res1++;
              else
               res2++;

               if(w1>w2)
                 res1++;
                  else
                   res2++;
                   if(c1>c2)
                   res1++;
                    else
                      res2++;
                if(res1>res2)
                  cout<<"A"<<endl;
                   else
                    cout<<"B"<<endl;    

      }



         
    return 0;
}