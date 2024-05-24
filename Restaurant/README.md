# Restaurant

## Problem Statement
Martha is interviewing at Subway. One of the rounds of the interview requires her to cut a bread of size  into smaller identical pieces such that each piece is a square having the maximum possible side length with no leftover piece of bread.

### Input Format
The first line contains an integer `T`. `T` lines follow. Each line contains two space-separated integers `l` and `b`, which denote the length and breadth of the bread.

### Constraints
- 1 <= T <= 1000
- 1 <= l, b <= 100

### Output Format
`T` lines, each containing an integer that denotes the number of squares of maximum size when the bread is cut as per the given condition.

### Sample Input
```
2
2 2
6 9
```

### Sample Output
```
1
6
```

## Solution

[solution.cpp](solution.cpp)

## Explanation

This solution calculates the number of squares of the maximum size that can be obtained by cutting a bread of given length `l` and breadth `b`. It first finds the greatest common divisor (gcd) of `l` and `b`, and then computes the number of squares using the formula `(l * b) / (gcd(l, b) * gcd(l, b))`. This value is printed for each test case provided.