#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    string ans = "NO";

    map<char, int> m1;
    for(int i=0; i<s.size(); i++){
        m1[s[i]]++;
    }

    map<char, int> m2;
    for(int i=0; i<s.size(); i++){
        m2[s[i]]++;
        if(m2[s[i]]==1){
            k--;
        }
        if(k<0){
            ans="YES";
            break;
        }
        if(m1[s[i]]==m2[s[i]]){
            k++;
        }
        

    }

    cout<<ans;
}