#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string lowercase(string s){
    for(auto &i :s){
        if(i>='A' && i<='Z'){
            i= char(int(i)-int('A')+int('a'));
        }
    }
    return s;
}
bool Sol(string s){
    s = lowercase(s);
    int arr[27] = {0};
    for(auto i:s){
        arr[int(int(i)-int('a'))] = 1;
    }
    int sum=0;
    for(auto i:arr){
        sum+=i;
    }
    //cout<<sum;
    return sum==26;
}
string pangrams(string s) {
    if(Sol(s))
        return "pangram";
    return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
