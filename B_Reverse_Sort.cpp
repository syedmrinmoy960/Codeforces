#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int test;
    cin>>test;
    while(test--){
        int n;
        string s;
        cin>>n>>s;
        string str=s;
        sort(str.begin(),str.end());
        if(s==str){
            cout<<"0"<<endl;
            continue;
        }
        cout<<"1"<<endl;
        vector<int>vec;
        for(int i=0;i<str.size();i++){
            if(str[i]!=s[i])vec.push_back(i+1);
        }
        cout<<vec.size()<<" ";
        for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
        cout<<endl;
    }
    return 0;
}