#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void recurse(int n){
    if(n/10==0){
        cout<<n%10<<" ";
        return;
    }
    recurse(n/10);
    cout<<n%10<<" ";
}

int main(){

    fast_io;

    int t; cin>>t;

    while(t--){
       int n; cin>>n;
       
       recurse(n);
       cout<<endl;
    }

    return 0;
}