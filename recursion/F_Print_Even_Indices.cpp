#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void recurse(vector<int> v, int n){
    if(n==0){
        cout<<v[n];
        return;
    }

    if(n%2==0) cout<<v[n]<<" ";
    recurse(v, n-2);
}

int main(){

    fast_io;

    int t; cin>>t;
    vector<int> v;

    while(t--){
        int n; cin>>n;
        v.emplace_back(n);
    }

    if(v.size()&1){
        recurse(v, v.size()-1);
    }
    else{
        recurse(v, v.size()-2);
    }

    return 0;
}