#!/bin/ruby

require 'json'
require 'stringio'

#
# Complete the 'camelcase' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def camelcase(s)
    # Write your code here
    c =0
    s.each_char do |i|
        if( i >= 'A' and i <= 'Z')
            c+=1
        end
    end
    if(!(s.empty?))
        c+=1
    end
    return c;
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

s = gets.chomp

result = camelcase s

fptr.write result
fptr.write "\n"

fptr.close()
