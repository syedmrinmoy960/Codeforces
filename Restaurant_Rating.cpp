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
    map<int,string>m1; //inside code a red black tree 
    m1[1]="abc";
    m1[5]="cdc";
    m1[3]="klj";

    m1.insert({7,"iuy"});
    m1.insert(make_pair(8,"hello"));

    // for(auto k:m1){
    //     cout<<k.first<<" "<<k.second<<endl;
    // }
    
    auto it=m1.find(3);
    if(it!=m1.end()){
        m1.erase(it);
    }
     for(auto k:m1){
        cout<<k.first<<" "<<k.second<<endl; //O(log n) complexity 
    }
     
     return 0;
}