#include <bits/stdc++.h>
using namespace std;

/*void recursion(vector<bool> &v, int n, int &ans){
    if(n <= 1) return;
    if(n==4){
        ans+=2;
    }
    int t = n;
    while (t > 0 && !v[t]) {
        t--;
    }
    n -= t;
    ans++;
    recursion(v, n, ans);
}

int main(){
    int n; cin >> n;
    vector<bool> v(n+1, true);
    v[0] = v[1]= false;

    for (int i = 2; i*i <= n; i++){
        if (v[i]) {
            for (int j = i*i; j <= n; j += i){
                v[j] = false;
            }
        }
    }

    int ans = 0;
    recursion(v, n, ans);
    cout << ans;
}
*/

bool isPrime(int n) {
    int root = sqrt(n);
    bool prime = true;
    for (int i=2; i<=root; i++) {
        if (n%i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}


int main(){
    int n; cin>>n;

    if(n%2==0 && n>2) cout<<2;
    else if(isPrime(n)){
        cout<<1;
        return 0;
    }
    else if(isPrime(n-2)) cout<<2;
    else cout<<3;
}
