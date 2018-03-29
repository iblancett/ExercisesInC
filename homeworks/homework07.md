## Homework 7

### C Exercises

Modify the link below so it points to the `ex07` directory in your
student repository.

[Here is a link to the ex07 directory in my repository](https://github.com/iblancett/ExercisesInC/tree/master/exercises/ex07)

### Think OS Chapter 7 reading questions

### Caching

1) What happens if a program writes a new value into the program counter? The new value gets decoded by the CPU as instructions.

2) What is the fundamental problem caches are meant to solve? "Memory Bottlenecking," or that half the instructions in a program are just to read or store data

3) If cache access time is 1 ns and memory access time is 10 ns, what is the average
access time of a program with hit rate 50%?  How about 90%?  5.5 ns for 50%, 1.1 ns for 90%

4) The book gives several examples of programming language features, like loops, that tend
to improve locality in the access pattern of instructions and/or data.  Can you think of other examples?  
Or counter-examples that might decrease locality?  This could be totally wrong but using pointers to functions may help as opposed to linking the entire function?  Decreasing locality would be like using a lot of string literals that are not in a list.  Linked lists may also decrease locality?  Because they are not consecutive spatially?  Unsure.

5)  If you refactor a program to improve locality, would you say the program is "cache aware"?  Why not?  Only for the system you're using because you have catered to your personal hardware cache and block size.

6) See if you can estimate the cost of a memory cache by comparing the prices of two similar CPUs with different cache sizes. I'm seeing somewhere between $40 and $80 per MB.

7) Why are cache policies generally more complex at the bottom of the memory hierarchy? Because they are used for data that is more infrequently used.

8) Can you think of a strategy operating systems could use to avoid thrashing or recover when it occurs? By detecting an increase in paging and blocking or killing processes.
