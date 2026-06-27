#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


void recurse(int n){
    if(!n) return;
    cout<<"I love Recursion"<<endl;
    recurse(n-1);
}

int main(){

    fast_io;

    int n; cin>>n;

    recurse(n);

    return 0;
}