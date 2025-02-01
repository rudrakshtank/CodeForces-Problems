~Problem Link: https://codeforces.com/problemset/problem/466/A

~Approach: The problem involves calculating the minimum cost to complete n tasks, where two operations are available:

~Algorithm Used:

Greedy Decision Making:

1. Initialize cost as 0 and completed as 0, representing the total cost and the number of completed tasks, respectively.

2. While not all tasks are completed (completed < n), check which operation is cheaper:

3. If there are enough tasks left to use the second operation (n - completed >= m), compare the cost of completing m tasks at once (b/m) and completing them individually using the first operation (a). Choose the cheaper one.

4. If there are fewer tasks left than m, choose the cheaper option between completing the remaining tasks using the first operation or using the second operation for the remaining tasks.

5. After selecting the cheapest option, update the cost and the number of completed tasks accordingly.

Output: Print the total cost after all tasks are completed.

~Time Complexity:
Loop Iterations: The loop runs until all n tasks are completed, and in each iteration, a constant amount of work is done (choosing the cheaper operation and updating the cost).

Time Complexity: O(n) as each task is processed once.
