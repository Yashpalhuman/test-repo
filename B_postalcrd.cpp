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
    vector<string>srr(n);
    vector<string>trr(m);
    for(auto &ai:srr){
        cin>>ai;
    }
    for(auto &ai:trr){
        cin>>ai;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        string s=srr[i];
        int x;
        x=stoi(s);
        x=x%1000;
        for(int j=0;j<m;j++){
            int y=stoi(trr[j]);
            if(x==y){
                ans++;break;
            }
        }
    }cout<<ans<<endl;
    return 0;
}