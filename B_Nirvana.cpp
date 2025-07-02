#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; cin>>n;
    int i = n.size()-1;
    if(i==0){
        cout<<n<<endl;
        return 0;
    }
    
    long long ans = 1;
    while(i>=0){
        if(i>1){
            n[i]='9';
            n[i-1]--;
            ans*=9;
        }
        else if(i==1){
            if(i>1){
                ans*=9;
            }
            else{
                long long temp = ans;
                ans*=(n[i]-'1');
                ans*=(n[i-1]-'0');
                temp*=9;
                temp*=(n[i-1]-'1');
                ans=max(ans,temp);
                break;
            }
        }
        i--;
        
    }
    cout<<ans;
}