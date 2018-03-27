## Homework 6

### C Exercises

Modify the link below so it points to the `ex06` directory in your
student repository.

[Here is a link to the ex06 directory in my repository](https://github.com/iblancett/ExercisesInC/tree/master/exercises/ex06)

### Think OS Chapter 6 reading questions

**Memory management**

1) Which memory management functions would you expect to take constant time? Free, because it always deallocates a single pointer
Which ones take time proportional to the size of the allocated chunk? Calloc because it sets all the bytes to 0.

2) For each of the following memory errors, give an example of something that might go wrong:

a) Reading from unallocated memory. The program reads the memory and uses whatever random value is there in its calculations without warning the user.

b) Writing to unallocated memory.  The system does not catch this until an arbitrary amount of time after the writing when it is read.  This will be very hard to debug.

c) Reading from a freed chunk. Same thing as reading from unallocated memory.

d) Writing to a freed chunk. Could mangle malloc and free data structures.

e) Failing to free a chunk that is no longer needed. The system could run out of physical memory causing malloc to fail.


3) Run

```
    ps aux --sort rss
```

to see a list of processes sorted by RSS, which is "resident set size", the amount of physical
memory a process has.  Which processes are using the most memory? Firefox & Atom.

4) What's wrong with allocating a large number of small chunks?  What can you do to mitigate the problem? When you free them, they will be fragmented for future use, decreasing the amount of possible large chunks.  Instead, use arrays to allocate your small structures.

If you want to know more about how malloc works, read
[Doug Lea's paper about dlmalloc](http://gee.cs.oswego.edu/dl/html/malloc.html)
