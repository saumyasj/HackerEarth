#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        map<char,int> m={{'0', 0}, {'1', 0}, {'2', 0}, {'3', 0}, 
        {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0}};
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            m[s[i]]+=2;
        }
        int ans=INT_MIN;
        char ch;
        for(auto it=m.rbegin();it!=m.rend();++it){
            if(it->second>=ans){
                ch=it->first;
                ans=it->second;
            }
        }
        cout<<ch<<endl;
    }
}

