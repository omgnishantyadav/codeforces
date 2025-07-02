#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t>0){
        t--;
        vector<string> v(9);

        for(int i=0; i<9; i++){
            cin>>v[i];
        }

        int i=0; int j=0;
        while(v[i][j]!=1){
            i++;
        }
        char c='1';

        while(i<9){
            v[i%9][j]=c;
            c++;
            i++;
            cout<<v[j];
        }
        cout<<endl;
    }
}