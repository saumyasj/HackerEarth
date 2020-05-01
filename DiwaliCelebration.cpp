#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, k, n;
    cin >>t;
    while(t--){
        cin >>a >>k >>n;
        cout <<(a + k*(n-1)) <<"\n";
    }
    return 0;
}