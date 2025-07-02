#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    set<int> s; 
    
    while(t--) {
        string q; cin >> q;
        int n; cin >> n;
        
        if(q == "insert") {
            s.insert(n);
        }
        else if(q == "lower_bound") {
            auto it = s.lower_bound(n);
            if(it != s.end()) cout << *it << endl;
            else cout << "-1" << endl;
        }
        else if(q == "upper_bound") {
            auto it = s.upper_bound(n);
            if(it != s.end()) cout << *it << endl;
            else cout << "-1" << endl;
        }
        else if(q == "find") {
            if(s.find(n) != s.end()) cout << "found" << endl;
            else cout << "not found" << endl;
        }
    }
}