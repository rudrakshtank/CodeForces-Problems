~Problem Link: https://codeforces.com/contest/991/problem/B

~Approach: The program reads an integer n, followed by an array of n integers. It calculates the average of the array and then iteratively increases the smallest element to 5 until the average reaches at least 4.50. The count of such modifications is printed as output.

~Algorithm Used:

1. Read 𝑛 and the array elements.

2. Compute the initial sum of the array.

3. Sort the array in ascending order.

4. While the average is less than 4.50:

   i) Replace the smallest element with 5.

   ii) Update the sum accordingly.

   iii) Re-sort the array.

   iv) Increment the modification counter.

6. Print the total modifications required.

~Time Complexity:

1. Sorting initially takes 𝑂(𝑛log𝑛)

2. Each iteration involves modifying one element, updating the sum (𝑂(1)), and re-sorting (𝑂(𝑛log𝑛)).

3. Overall, the worst-case complexity is 𝑂(𝑛^2 log𝑛)
