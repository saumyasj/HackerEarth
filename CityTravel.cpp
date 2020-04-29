
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     long long int s,x,n,t,y,i;
//     cin>>s>>x>>n;
//     map<int,int>m;
//     for(i=0;i<n;i++){
//         cin>>t>>y;
//         m.insert(pair<int,int>(t,y));
//     }
//     long long int count=0;
//     i=1;
//     map<int,int>::iterator it=m.begin();
//     while(count<s){
//         if(it->first==i){
//             count+=it->second;
//             it++;
//             i++;
//         }
//         else{
//             count+=x;
//             i++;
//         }
        
//     }
//     cout<<(i);

// }


int main(){
    long long int s,x,n,t,y,i;
    cin>>s>>x>>n;
    vector<pair<long long, long long>>v(n);
    for(i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        
    }
    sort(v.begin(),v.end());
    long long int count=0, day=0,j=0;
    while(count<s){
        day++;
        if(day==v[j].first){
            count+=v[j].second;
            j++;
        }
        else{
            count+=x;
        }
    }
    cout<<day;
}

