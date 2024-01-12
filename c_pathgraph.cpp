#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<map>
#include<math.h>
#include<algorithm>
#include<vector>
#include<bitset>
#define ll long long
#define pf push_front
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int INF=1e9+7;
const int N=1e5+7;
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<int>v[n+1];
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    if(m!=n-1){
        cout<<"NO"<<endl;return 0;
    }
    bool flag=0;
    for(int i=2;i<n;i++){
        if(v[i].size()!=2)flag=1;
    }
    if(v[1].size()!=1)flag=1;
    if(v[n].size()!=1)flag=1;

    if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


    return 0;
}