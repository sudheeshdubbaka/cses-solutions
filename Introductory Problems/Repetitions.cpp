#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    getline(cin,a);
    int cnt=1,maxim=1;
    for(int i=1;i<a.size();i++){
        if(a[i-1]==a[i]){
            cnt++;
        }else{
            cnt=1;
        }
        maxim=max(maxim,cnt);
    }
    cout<<maxim;
    return 0;
}
