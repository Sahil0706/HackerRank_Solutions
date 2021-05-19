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
     * Complete the 'timeConversion' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static string timeConversion(string s)
    {
        string hour = s.Substring(0,2);
        string id = s.Substring(8,2);
        int iHour = Int32.Parse(hour);

        if( id == "PM" )
        {
            if( iHour != 12 )
                iHour += 12;

            hour = iHour.ToString();
        }

        if( id == "AM" )
        {
            if( iHour == 12 )
                hour = "00";
            else if( iHour < 10 )
                hour = "0" + iHour.ToString();
            else
                hour = iHour.ToString();
        }

        return hour + s.Substring(2,6);

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        string result = Result.timeConversion(s);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
