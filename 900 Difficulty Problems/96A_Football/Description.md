~Problem Link: https://codeforces.com/problemset/problem/96/A

~Approach: The solution checks if the input string contains seven consecutive identical characters ('0000000' or '1111111'). It uses the find() method to search for these sequences within the string.

~Algorithm:
1. Read the input string s.
2. Use find("0000000") to search for seven consecutive '0's and find("1111111") to search for seven consecutive '1's.
3.
   a. If either substring is found, print "YES".
  
   b. If neither is found, print "NO".

~Time Complexity:
The time complexity is O(n), where n is the length of the string. This is because the find() method scans the string linearly to search for the substrings.
