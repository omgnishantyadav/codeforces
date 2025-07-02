#include <bits/stdc++.h> 
using namespace std;

string solve(){
    string s; cin>>s;
    string ans="NO";
    int ind=-1;
    for(int i=0; i<n; i++){
        if(s[i]=='a') {
            ind=i;
            break;
        }
    }
    if(ind==-1) return ans;
    int left=ind-1;
    int right=ind+1;
    char ch = 'a';
    while(left!=0 && right!=s.size()){
        if(s[left]==ch++)left--;
        else if(s[right]==ch++) right++;
        else break;
    }

    if(left==-1 && right==s.size()+1)
    
}


int main(){
    int t; cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}
