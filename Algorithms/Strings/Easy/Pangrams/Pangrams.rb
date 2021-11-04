#!/bin/ruby

require 'json'
require 'stringio'
require 'set'


#
# Complete the 'pangrams' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def pangrams(s)
    # Write your code here
    s = Set.new(s.downcase.gsub(/\s+/, "").chars())
    if(s.size() == 26)
    return "pangram"
    else
    return "not pangram"
    end
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

s = gets.chomp

result = pangrams s

fptr.write result
fptr.write "\n"

fptr.close()
