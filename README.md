COMPSCI 230 Spring 2021
Lab 1
February 8

In this lab we will practice the most commonly used gdb commands, in preparation
for Project 1.

Part 1

Open digit.c and inspect the code.

Compile the program with -g flag (gcc -g digits.c -o digits), and do the
following in gdb:

  1. Set breakpoints at line 18 and line 24.
  2. Go through all iterations of the loop (hint: use next and/or continue), and
     display the value of int variable c in each iteration at both breakpoints
     (hint: use display).
  3. Run the program again in gdb, and delete the first break point (at line 18)
     but keep the second (line 24). Step into function validate_digit(), and
     print the value of digit.
  4. Run the program again in gdb with the only breakpoint at line 24. Call
     function validate_digit() with argument c from gdb. You should be able to
     see the returned value of validate_digit().

