#include<bits/stdc++.h>
using namespace std;

// int compare(const void *a,const void *b){
//     return(*(int*)a-*(int*)b);
// }

int main(){
    int n, q,num;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //qsort(arr,n,sizeof(int),compare);
    sort(arr,arr+n);
    while(q--){
        cin>>num;
        if(binary_search(arr,arr+n,num)){
            cout<<"YES"<<endl;
        }
        else 
            cout<<"NO"<<endl;
    }
}
