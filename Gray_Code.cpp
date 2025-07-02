#include <bits/stdc++.h>
using namespace std;

vector<string> grayCode(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string> temp;
    vector<string> prevCode = grayCode(n-1);
    for(int i=0; i<pow(2,n-1); i++){
        temp.push_back("0"+prevCode[i]);
    }
    for(int i=pow(2,n-1)-1; i>=0; i--){
        temp.push_back("1"+prevCode[i]);
    }
    return temp;
}

int main(){
    int n; cin>>n;
    vector<string> result = grayCode(n);
    for(auto code : result){
        cout<<code<<endl;
    }
    return 0;
}