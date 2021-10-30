using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'minimumNumber' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER n
     *  2. STRING password
     */

    public static int minimumNumber(int n, string password)
    {
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
            for(int j=0;j<special_characters.Length;j++){
                if(special_characters[j]==password[i]){
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
        ans = Math.Max(ans, 6 - n);
    }
    return ans;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        string password = Console.ReadLine();

        int answer = Result.minimumNumber(n, password);

        textWriter.WriteLine(answer);

        textWriter.Flush();
        textWriter.Close();
    }
}
