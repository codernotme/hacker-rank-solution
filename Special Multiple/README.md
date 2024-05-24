# Special Multiple

## Problem Statement
Given an integer N, find the least positive integer X made up of only 9's and 0's, such that X is a multiple of N.

### Input Format
The first line contains an integer T which denotes the number of test cases. T lines follow.
Each line contains the integer N for which the solution has to be found.

### Output Format
Print the answer X to STDOUT corresponding to each test case. The output should not contain any leading zeroes.

### Constraints
- 1 <= T <= 10^4
- 1 <= N <= 500

### Sample Input
```
3
5
7
1
```

### Sample Output
```
90
9009
9
```

## Solution

[solution.cpp](solution.cpp)

## Explanation

This solution calculates the least positive integer X made up of only 9's and 0's, such that X is a multiple of the given integer N. It uses a queue to explore possible candidates for X, appending either '0' or '9' to each candidate and checking if it is divisible by N. If a candidate is found, it is returned as the result. If no such candidate is found, "-1" is returned.