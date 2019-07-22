# Sieve-of-Eratosthenes
The most efficient way to find a prime number.

Takes very less time for even bigger integers
Following is the algorithm to find all the prime numbers less than or equal to a given integer n by Eratosthenes’ method:

1) Create a list of consecutive integers from 2 to n: (2, 3, 4, …, n).

2) Initially, let p equal 2, the first prime number.

3) Starting from p2, count up in increments of p and mark each of these numbers greater than or equal to p2 itself in the list.
   These numbers will be p(p+1), p(p+2), p(p+3), etc..
   
4) Find the first number greater than p in the list that is not marked. If there was no such number, stop. Otherwise, let p now equal 
   this number (which is the next prime), and repeat from step 3.

# Note

I used memset() to first assign every no. between 2 and n as a prime number.

I advice you to use this method(or a better modification) everytime to find prime numbers.

Any improvement in code will be highly appreciated.IF any more efficient code is made by you in any other programming language,you are welcome to push to this repository but by making your own branch.

Thanks for reading :-)
