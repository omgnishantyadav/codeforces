#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,A,B;
    cin>>n>>A>>B;
    long long S=0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        S+=v[i];
    }
    sort(v.begin() + 1, v.end(), greater<int>());

    int ans=0;
    for(int i=1; i<v.size(); i++){
        if(1LL*v[0]*A>=1LL*S*B){
            break;
        }

        S-=v[i];
        ans++;
    }

    cout<<ans;

}