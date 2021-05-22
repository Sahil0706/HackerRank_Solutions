#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    int j = 2; // last multiple of factorial of any number goes upto 2   
    int a[1000] = {0};// array of 1000 spaces initialized with 0  
    a[0] = 1;  
    int len = 1;// length starts with one  
    int c = 0, num = 0;  
    while(j <= n) // till j is less than value for which factorial is required  
    {  
        c = 0;  
        num = 0;  
        while(c < len)  
        {  
            a[c] = a[c] * j;  
            a[c] = a[c] + num;  
            num = a[c] / 10;  
            a[c] = a[c] % 10;  
            c++;  
        }  
        while(num != 0)  
        {  
            a[len] = num % 10;  
            num = num / 10;  
            len++;  
        }  
        j++;  
    }  
    len--;
    while(len >= 0)  
    {  
        cout<<a[len];  
        len--;  
    }  
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

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
