
#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b){
    return (a*b)/__gcd(a,b);
}
int main(){
    long long int n,a,b;
    cin>>n>>a>>b;
    cout<<(n/a)+(n/b)-(n/lcm(a,b));

}