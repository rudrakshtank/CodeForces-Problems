~Problem Link: https://codeforces.com/problemset/problem/158/B

~Approach: The problem involves calculating the minimum number of boxes required to pack items of different sizes (1, 2, 3, and 4). The approach uses greedy methods to pack as efficiently as possible, prioritizing larger items first and pairing smaller ones effectively.

~Algorithm Used:
1. Sorting: The array is sorted to facilitate efficient packing, starting with the largest items.
2. Counting Items: We count the number of items of each size (1, 2, 3, and 4).
3. Greedy Packing:

   a. Items of size 4 can be packed independently, so they are directly counted as boxes.
   
   b. Items of size 3 can be paired with items of size 1. If there are more size 3 items than size 1, the remaining size 3 items are packed individually.

   c. Items of size 2 are paired in groups of two. If there’s an odd number, the leftover item is paired with two size 1 items if possible.

   d. Remaining size 1 items are packed together in boxes of 4.
   
    Output: The minimum number of boxes required is then printed.

~Time Complexity:

a. Sorting: Sorting the array takes O(n log n), where n is the number of items.

b. Counting and Greedy Packing: Counting the occurrences of each item size takes O(n) time, and the subsequent greedy operations also run in O(n).

Thus, the overall time complexity is: O(n log n) due to the sorting step.
