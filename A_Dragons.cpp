//#include<cstdio>
//#include<cassert>
//#include<iostream>
//#include<cstring>
//#include<algorithm>
#include<bits/stdc++.h>
#define MAX ((int)2e9 + 5)
#define MAXP ((int)1e5 + 5)
//#define MAXL ((ll)1e18 + 5)
#define MAX_X ((int)2001)
#define MAX_Y ((int)2001)
#define pi acos(-1)
#define MOD ((int)1e9 + 7)
//#define MOD ((int)998244353 + 0)
#define BAS ((int)1e6 + 3)
//#define BAS ((int)2e5 + 3)
#define N ((int)1e5 + 9)
#define eps (1e-8)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
//#define logn 17
#define endl "\n"
#define mpp make_pair
#define BUCK 105
#define LEF (idx<<1)
#define RIG ((idx<<1)|1)
//#define int LL
 
 
using namespace std;
 
void sieve(int n , vector < int >& prime)
{
    vector < bool > vis(n+1); /// vis[i] = 1 if i is crossed.
    for(int i = 3 ; 1LL*i*i <= n ; i += 2){ /// O (root(n))
        if(!vis[i]){
            for(int j = i*i ; j <= n ; j += i<<1){ /// O ( n / i ) ; i = 3 -> j = 9 , 12 , 15 , 18 , 21
                vis[j] = 1;
            }
        }
    } /// O ( n * ln ( ln ( N ) ) )
    prime.push_back(2);
    for(int i = 3 ; i <= n ; i += 2){
        if(!vis[i]) prime.push_back(i);
    }
 
}
 
// bool zerodigit(int p)
// {
//     while(p > 0){
//         if(p % 10 == 0) return 1;
//         p /= 10;
//     }
//     return 0;
// }
 
// int digit(int p)
// {
//     int cnt = 0;
//     while(p > 0){
//         p /= 10;
//         cnt++;
//     }
//     return cnt;
// }
 
 
 
int main()
{/// problem link: https://www.spoj.com/problems/VECTAR8/
    fastio;
    // vector < int > prime;
    // sieve( 1e6 , prime);
    // vector < int > spp(1e6) , pre(1e6); /// spp[a] = 1 if a is special prime
    // vector < int > pwr(7);
    // pwr[0] = 1;
    // for(int i = 1 ; i < 7 ; i++) pwr[i] = pwr[i-1]*10;
    // for(int p:prime){
    //     if(zerodigit(p) == 0){ /// p = 127 ; cnt = 2 ; 127 % 100 = 27
    //         int cnt = digit(p) - 1;
    //         int newp = p % pwr[cnt];
    //         if(spp[newp] || newp == 0) spp[p] = 1;
    //     }
    // }
 
    // for(int i = 1 ; i < 1e6 ; i++) pre[i] = pre[i-1] + spp[i];
    // int t;
    // cin>>t; /// t = 1e5
    // while(t--){
    //     int n;
    //     cin>>n; /// n = 1e6 , ans = spp[0] + spp[1] + spp[2] + ... + spp[n]; /// prefix of length (n+1)
    //     cout<<pre[n]<<endl;
    // }

    int n, k;
    cin >> n >> k;
    pair<int, int> p1[k];

    for (int i = 0; i < k;i++){
        cin >> p1[i].first;
        cin >> p1[i].second;
    }
    sort(p1, p1 + k);

    for (int i = 0; i < k;i++){
         if(n>p1[i].first){
             n += p1[i].second;
         }
         else{
             cout << "NO" << endl;
             return 0;
         }
    }

    cout << "YES" << endl;

    return 0;
}