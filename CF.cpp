#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> plane(m);
    vector<int> duplicate(m);
    for (int  i = 0; i < m; i++)
    {
        cin >> plane[i];
        duplicate[i]=plane[i];
    }
    int j=0;
    int minm=0;
    for(int i=0; i<n; i++){
        sort(plane.begin(), plane.end());
        if(plane[j]==0) j++;
        minm+=plane[j];
        plane[j]--;
    }

    j=0;
    int maxm=0;
    for(int i=0; i<n; i++){
        sort(duplicate.rbegin(), duplicate.rend());
        if(duplicate[j]==0) j++;
        maxm+=duplicate[j];
        duplicate[j]--;
    }

    cout << maxm << " " << minm << endl;
    
    return 0;
}