#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    long long y;
    cin>>n;
    while(n--){
        cin>>a>>b;
        int c=max(a,b);
        int d=min(a,b);
        y = 1LL * c * c - (c - 1);
        if(c%2==1){
            if(a==d){
                y=y+(c-d);
            }else{
                y=y-(c-d);
            }      
        }else{
            if(a==c){
                y=y+(c-d);
            }else{
                y=y-(c-d);
            } 

        }      
        
        cout<<y<<'\n';

    }

    
    
    return 0;
}