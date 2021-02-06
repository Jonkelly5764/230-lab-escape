This is an easy program with two bugs, one is that in the sum_acc(), there is an index out of bound, but the complier will not recognize and the result would be pretty randominzed wired number; another is that, in magic_calc(), it also comes with the same error as the sum_acc(), also, because it just times everything together for var foo_2, the result is divided by 0 and return value comes to inf. 

My thought is that, for the questions for student, besides to use the gdb command to find the bugs:

1. provide a quick fix to the first bug
# the answer is that just change the condition in the while loop from <= to <
2. find the problem why magic just produced inf but not a real number that it supposed to do, but no fix is needed.

