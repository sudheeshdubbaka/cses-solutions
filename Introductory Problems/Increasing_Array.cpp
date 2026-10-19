#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,cnt=0;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
            cnt+=v[i-1]-v[i];
            v[i]=v[i-1];
        }else{
            continue;
        }

    }
    cout<<cnt;


    return 0;
}
