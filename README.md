# COMPSCI 230 Spring 2021
# Escape Lab

In this lab we will practice the most commonly used gdb commands, in preparation
for the *Escape Project*.

## Part 1

Open `digits.c` and inspect the code in the `emacs`, `vim`, or `nano` editors:

```
$ vim digits.c
```

*Editor Hints:*

* To save and quit `vim`, type `esc` (escape key), followed by `:` and `w` and `enter` to save the file then `:` followed by `q` and `return`.
* To save and quit `emacs`, type `ctrl-x` followed by `ctrl-s` to save the file then `ctrl-x` followed by `ctrl-c`.
* To save and quit `nano`, `ctrl-o` to save the file, `ctrl-x` to quit.

Compile the program with the `-g` flag:

```
$ gcc -g digits.c -o digits
```

and do the following in `gdb`. Start by running `gdb` with TUI enabled:

```
$ gdb -tui digits
```

1. Set breakpoints at line 18 and line 24:

   ```
   (gdb) break 18
   (gdb) b 24
   ```

2. Start the program with:
   
   ```
   (gdb) run
   ```
   
   Go through all iterations of the loop (use **next** and/or **continue**), and [display](https://sourceware.org/gdb/current/onlinedocs/gdb/Auto-Display.html) the value of `int` variable `c` in each iteration at both breakpoints with:

   ```
   (gdb) display c
   ```

   To cancel `display` requests, use [undisplay](https://sourceware.org/gdb/current/onlinedocs/gdb/Auto-Display.html). Specifically in our case:

   ```
   (gdb) undisplay 1
   ```

3. Delete the first break point (at line 18) but keep the second (line 24):

   ```
   (gdb) clear 18
   ```

   Run the program again. When the program hits the breakpoint, step into the function `validate_digit()`:

   ```
   (gdb) step
   ```

   and immediately print the value of digit:

   ```
   (gdb) print digit
   ```
   
   Advance the program by one line (use next), and print the value of digit again. You should get different numbers.

4. Run the program again with the only breakpoint at line 24. When the program
     encounters the breakpoint, call function `validate_digit()` with argument `c` from `gdb`:

   ```
   (gdb) call validate_digit(c)
   ```

   You should be able to see the returned value of `validate_digit()`.

5. Run the program again with the only breakpoint at line 24. Enter a single character that is not 9. When the program is stopped at the breakpoint, change the value of variable `c` to an appropriate integer so that the program considers it a "good digit":

   ```
   (gdb) set var c=9
   ```

## Part 2

For this part you are asked to debug a program `calc_debug` that is already compiled with flag `-g`, without access to the source code. There are four functions in this program: `main()`, `sum_calc()`, `mean_calc()`, and `magic_calc()`:

* The function `sum_calc()` calculates the sum of the elements of an int array.
* The function `mean_calc()` calculates the mean of the elements of an int array.
* The function `magic_calc()` does some unspecified calculation.

There is a bug in `sum_calc()` or `mean_calc()`. You are asked to use `gdb` to find out what the bug is. Do the following in `gdb`:

1. Set a breakpoint at `main()`:

   ```
   (gdb) b main
   ```

2. Go through every line of main (use `next` and/or `continue`) to see what the program does. You may find setting another breakpoint useful.
3. You will have noticed that the values of the `int` variable `sum` and the
     `double` variable `mean` are not correct. Step into the functions `sum_cal()` and `mean_calc()` to find the bug.
4. Step into the function `magic_calc()` to find out why the `double` variable
     `magic` has the printed value.

You will report your findings from bullets 3 and 4 in the associated lab assignment on Gradescope.



