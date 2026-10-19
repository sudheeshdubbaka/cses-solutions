#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long X=0;
    long long n,a;
    cin>>n;    
    for (long long i = 1; i <=n; i++) {
         X^= i;
    }n--;
    while(n--){
        cin>>a;
        X^=a;

    }
    cout<<X;   
    

    return 0;
}
