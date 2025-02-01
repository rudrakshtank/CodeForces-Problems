~Problem Link: https://codeforces.com/problemset/problem/4/A

~Approach:

1. You take an integer input w, representing the weight of the watermelon.
2. The goal is to determine if it can be divided into two even parts, each having an integer weight.
3. The key observation is that a number is divisible into two even parts if and only if it is even and greater than 2.
4. You check this condition:

   a. If w > 2 and w % 2 == 0, print "YES" (it can be split evenly).

   b. Otherwise, print "NO".
  
~Algorithm Used:
Mathematical Checking: Instead of iterating or trying all possible divisions. 

~Time Complexity: The solution directly checks the mathematical condition in O(1) time complexity.
