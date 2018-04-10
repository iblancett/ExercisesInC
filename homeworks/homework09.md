## Homework 9

### C Exercises

Modify the link below so it points to the `ex09` directory in your
student repository.

[Here is a link to the ex09 directory in my repository](https://github.com/iblancett/ExercisesInC/tree/master/exercises/ex09)

### Think OS Chapter 9 reading questions

1) Why does each thread have its own stack? So threads can call functions without interfering with each other.

2) What does the gcc flag `-lpthread` do? Links your script to the pthread library

3) What does the argument of `pthread_exit` do? Exits the thread and passes shared value to the joining thread

4) Normally the same thread that created a thread also waits to join it.
What happens if another thread tries to join a thread it did not create? You may get an error if there is another thread waiting to join it.  Otherwise, the threads will be able to join.

5) What goes wrong if several threads try to increment a shared integer at the same time?  Multiple threads could access a value before it is incremented.

6) What does it mean to "lock a mutex"? To protect threads executing a code block from being interrupted by other threads.
