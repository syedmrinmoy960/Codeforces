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
 int ar[(int)1e6];
int pre[(int)1e6];

using namespace std;   

int main(){    
ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
         cin>>ar[i];
   }

    pre[0] = ar[0];
   for(int i=1;i<n;i++){ 
        pre[i]=pre[i-1]+ar[i];
   }
   int g,k;
   cin>>g>>k;
   if(g==0){
        cout<<pre[k];
   }
    else{
        cout<<(pre[k]-pre[g])<<endl;
    }
     
         
  return 0;
}