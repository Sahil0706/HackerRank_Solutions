#include <bits/stdc++.h>
#define fastio cin.tie(0); std::ios::sync_with_stdio(false);
#define li long int
using namespace std;
int main() {
    fastio ;
    li q;
    cin>>q;
    stack<string>st;
    string s="";
    st.push(s);
    while(q--){
        li opr_type;
        cin>>opr_type;
        if(opr_type == 1){
            st.push(s);
            string opr;
            cin>>opr;
            s.append(opr);
        }
        else if(opr_type == 2){
            st.push(s);
            li opr;
            cin>>opr;
            while(opr--)
                s.pop_back(); 
        }
        else if(opr_type == 3){
            li opr;
            cin>>opr;
            cout<<s[opr-1]<<"\n";
        }
        else if(opr_type == 4){
            s = st.top();
            st.pop();
        }
    }
    return 0;
}
