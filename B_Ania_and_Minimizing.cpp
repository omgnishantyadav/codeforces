#include <bits/stdc++.h>
using namespace std;
 

int main(){
    int n,k; 
    string s;
    cin>>n>>k>>s;
    if(k==0){
        cout<<s;
        return 0;
    }
    if(n==1) {
        cout<<0;
        return 0; 
    }

    int i=0;
    if(s[i]!='1'){
        s[i]='1';
        k--;
    }
    i++;
    while(i<n && k>0){
        if(s[i]=='0') k++;
        s[i]='0';
        k--;
        i++;
    }
    cout<<s;
    

}