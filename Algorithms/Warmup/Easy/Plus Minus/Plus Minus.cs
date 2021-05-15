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
     * Complete the 'plusMinus' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void plusMinus(List<int> arr)
    {
        int pos = 0, neg=0, zero=0;
        int total = arr.Count();
        for(int i=0; i<total; i++){
            if(arr[i]>0)
                pos++;
            else if(arr[i]<0)
                neg++;
            else
                zero++;
        }
        Console.WriteLine(Convert.ToDouble(pos)/Convert.ToDouble(total));
        Console.WriteLine(Convert.ToDouble(neg)/Convert.ToDouble(total));
        Console.WriteLine(Convert.ToDouble(zero)/Convert.ToDouble(total));
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

        Result.plusMinus(arr);
    }
}
