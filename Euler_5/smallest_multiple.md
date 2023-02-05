This problem is a programming version of Problem 5 from `projecteuler.net` provided by `Hackerrank`

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible(divisible with no remainder) by all of the numbers from 1 to N?

Input Format
```
First line contains T that denotes the number of test cases. This is followed by  lines, each containing an integer, N.
```

Constraints
```
* 1 <= T <= 10
* 1 <= N <= 40
```

Output Format
```
Print the required answer for each test case.
```

Sample Input 0
```
2
3
10
```
Sample Output 0
```
6
2520
```
Explanation 0
```
You can check 6 is divisible by each of {1, 2, 3}, giving quotient of {6, 3, 2} respectively.
You can check 2520  is divisible by each of {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}  giving quotient of {2520, 1260, 840, ...} respectively.
```
