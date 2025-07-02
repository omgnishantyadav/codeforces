#include <bits/stdc++.h>
using namespace std;

string isSquare(long long sum){
    string ans = "NO";
    long long temp=pow(sum,0.5);
    if(pow(sum,0.5)==temp){
        ans="YES";
    }
    return ans;
}

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        long long sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum+=v[i];
        }

        cout<<isSquare(sum)<<endl;
        
    }
}