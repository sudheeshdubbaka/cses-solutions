#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int y=1000000007;
    int ans=1;
    for(int i=0;i<n;i++){
        ans=(ans*2)%y;
    }
    cout<<ans;

    return 0;
}