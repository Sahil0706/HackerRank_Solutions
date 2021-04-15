#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    while(a<=b){
        if(a<=9 && a>=1){
            if(a==1)
                cout<<"one";
            if(a==2)
                cout<<"two";
            if(a==3)
                cout<<"three";
            if(a==4)
                cout<<"four";
            if(a==5)
                cout<<"five";
            if(a==6)
                cout<<"six";
            if(a==7)
                cout<<"seven";
            if(a==8)
                cout<<"eight";
            if(a==9)
                cout<<"nine";
        }
        else{
            if(a%2 == 0)
                cout<<"even";
            else
                cout<<"odd";
        }
        cout<<"\n";
        a++;
    }
    return 0;
}
