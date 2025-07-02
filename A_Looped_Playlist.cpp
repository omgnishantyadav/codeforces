#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,p; cin>>n>>p;
    long long arraySum=0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        arraySum+=v[i];
    }
    
    int maxm=INT_MIN;
    int index=-1;
    for(int i=0; i<n; i++){
        if(v[i]>maxm){
            maxm=v[i];
            index=i;
        }
    }
    long long c=0;
    while(p>arraySum){
        p-=arraySum;
        c+=n;
    }

    int i=index; int j=index;
    vector<long long> arr;
    while(p>0){
        if(v[j%n]>=v[i%n]){
            p-=v[j%n];
            j++;
        }
        else if(i>0){
            i--;
            p-=v[(n+i)%n];
        }
        else{
            p-=v[j%n];
            j++;
        }
        c++;
    }
    int start = min(i+1,j+1);
    

    cout<<start<<" "<<c<<endl;
}