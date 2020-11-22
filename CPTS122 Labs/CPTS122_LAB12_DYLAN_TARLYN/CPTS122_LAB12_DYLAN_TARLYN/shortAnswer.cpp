/*

• Consider the following algorithm to calculate the sum of the n elements in an integer
array a[0..n-1].

sum = 0;
for (i = 0; i < n; i++)
 sum += a[i];
print sum;

1. What is the growth rate function for the above algorithm. (How many steps
are executed when this algorithm runs?)

- n+2

2. What is big O notation?

- O(n)

• Now consider an algorithm for finding the largest element in a square twodimensional array a[0..n-1][0..n-1]

max = a[0][0]
for (row = 0; row < n; row++)
 for (col = 0; col < n; col++)
 if (a[row][col] > max)
max = a[row][col];
print max;

1. What is the growth rate function for the above algorithm. (How many steps
are executed when this algorithm runs?)

- n^2+2

2. What is big O notation?

- O(n^2)

• Consider the following algorithm which determines the sum of the first n positive
integers.

sum = 0
for (int j = n; j > 0; j--)
 sum = sum + j
print sum

1. What is the growth rate function for the above algorithm. (How many steps are
executed when this algorithm runs?)

- n+2

2. What is big O notation?

- O(n)

*/