#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hour = s.substr(0,2);
    string id = s.substr(8,2);
    int iHour = stoi(hour.c_str());
    if( id == "PM" ){
        if( iHour != 12 )
           iHour += 12;

        hour = to_string(iHour);
    }

    if( id == "AM" ){
        if( iHour == 12 )
           hour = "00";
        else if( iHour < 10 )
           hour = "0" + to_string(iHour);
        else
           hour = to_string(iHour);
    }

    return hour + s.substr(2,6);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
