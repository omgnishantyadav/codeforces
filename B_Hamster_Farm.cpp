#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;

    vector<long long> v(k);
    long long temp = LLONG_MAX; // safest large value
    int index = -1;

    for(int i=0; i<k; i++){
        cin>>v[i];
        if(n % v[i] < temp){
            temp = n % v[i];
            index = i;
        }
    }

    if(index != -1)
        cout << index + 1 << " " << n / v[index] << endl;
    else
        cout << "-1 0" << endl; // fallback
}
