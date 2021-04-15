#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ld long long int

int main() {
    ld n,q,i;
    cin>>n;
    cin>>q;
    vector<vector<ld>>v;
    for (i=0; i<n; i++){
        ld temp,var;
        cin>>temp;
        vector<ld>ok;
        while(temp--){
            cin>>var;
            ok.push_back(var);
        }
        v.push_back(ok);
    }
    for(i=0; i<q; i++){
        ld j,k;
        cin>>j>>k;
        cout<<v[j][k]<<"\n";
    }
    return 0;
}
