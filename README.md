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


Part 2

For this part you are asked to debug a program calc_debug that is already
compiled with flag -g, without access to the source code. There are four
functions in this program: main(), sum_calc(), mean_calc(), and magic_calc():
  * The function sum_calc() calculates the sum of the elements of an int array.
  * The function mean_calc() calculates the mean of the elements of an int
    array.
  * The function magic_calc() does some unspecified calculation.

There is a bug in sum_calc() or mean_calc(). You are asked to use gdb to find
out what the bug is. Do the following in gdb:

  1. Set a breakpoint at main().
  2. Go through every line of main (use next and/or continue) to see what the
     program does. You may find setting another breakpoint useful.
  3. You will have noticed that the values of the int variable sum and the
     double variable mean are not correct. Step into the functions sum_calc()
     and mean_calc() to find the bug.
  4. Step into the function magic_calc() to find out why the double variable
     magic has the printed value.

You will report your findings from point 3 and 4 on Gradescope.



