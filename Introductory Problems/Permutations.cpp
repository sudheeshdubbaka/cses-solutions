#include <bits/stdc++.h>
using namespace std;
void ans(long long n){
    if(n==3||n==2) {cout<<"NO SOLUTION";return ; }
   for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    ans(n);
    return 0;
}
