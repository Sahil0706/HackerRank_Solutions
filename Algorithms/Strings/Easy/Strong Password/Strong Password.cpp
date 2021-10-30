#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    bool has_number=true,has_lower=true,has_upper=true,has_special=true;
    string special_characters = "!@#$%^&*()-+";
    int i=0;
    while( (i<n) && (has_number || has_lower || has_upper || has_special) ){
        if(password[i] >= 'a' && password[i] <= 'z')
            has_lower = false;
        else if(password[i] >= 'A' && password[i] <= 'Z'){
            has_upper = false;
        }
        else if(password[i] >= '0' && password[i] <= '9'){
            has_number = false;
        }
        else{
            for(auto j:special_characters){
                if(j==password[i]){
                    has_special = false;
                    break;
                }
            }
        }
        i++;
    }
    int ans = 0;
    if(has_lower)
        ans++;
    if(has_upper)
        ans++;
    if(has_number)
        ans++;
    if(has_special)
        ans++;
    if(n<6){
        ans = max(ans, 6 - n);
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
