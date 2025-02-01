~Problem Link: https://codeforces.com/contest/451/problem/B

~Approach: The problem is solved by checking if the given array can be sorted by reversing exactly one subarray. 

~Algorithm Used:
1. Check if already sorted: If the array is already sorted, print "yes" and return 1 1 (meaning no changes are needed).
2. Find the segment to reverse: Identify the first and last indices (si and ei) where the array is not in increasing order.
3. Reverse the segment: Reverse the subarray between si and ei.
Check if sorted: If the array becomes sorted after reversing, print "yes" and the indices of the reversed segment. Otherwise, print "no".

    a. Use is_sorted() to check if the array is already sorted; if yes, print "yes" and return 1 1.

    b. Iterate through the array to find the first (si) and last (ei) indices where the order is violated.

    c. Reverse the subarray from si to ei.

    d. Use is_sorted() again to check if the array is now sorted. If yes, print "yes" along with the 1-based indices of the reversed segment. Otherwise, print "no".

~Time Complexity:

1. Finding disorder in the array: O(n)

2. Reversing the subarray: O(k) (where k is the length of the reversed segment, at most n)

3. Checking again if sorted: O(n)

Total Complexity: O(n) (since all operations are linear in complexity).
