#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


void numbers(int n){
    if(!n) return;
    numbers(n-1);
    cout<<n<<endl;
}

int main(){

    fast_io;

    int t; cin>>t;

    numbers(t);

    return 0;
}