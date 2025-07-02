#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t>0){
        t--;
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans=0;
        int one=1, two=2, five=1, zero=3, three=1;
        for(int i=0; i<n; i++){
            if(a[i]==1){
                one--;
            }
            else if(a[i]==2){
                two--;
            }
            else if(a[i]==5){
                five--;
            }
            else if(a[i]==0){
                zero--;
            }
            else if(a[i]==3){
                three--;
            }
            if(one<=0 && two<=0 && five<=0 && zero<=0 && three<=0){
                ans=i+1;
                break;
            }
            
        }

        if(one>0 || two>0 || five>0 || zero>0 || three>0){
            ans=0;
        }
        cout<<ans<<endl;

    }
}