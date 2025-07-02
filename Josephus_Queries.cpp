#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin>>q;
    while(q--){
        int n; int k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            v[i]=i+1;
        }
        int i=0;
        while(true){
            k--;
            i++;
            if(k==0){
                cout<<v[i%v.size()]<<endl;
                break;
            }
            i=i%v.size();
            v.erase(v.begin()+i);

        }
    }
}