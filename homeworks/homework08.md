## Homework 8

### C Exercises

Modify the link below so it points to the `ex08` directory in your
student repository.

[Here is a link to the ex08 directory in my repository](https://github.com/iblancett/ExercisesInC/tree/master/exercises/ex08)

### Think OS Chapter 8 reading questions

**Multitasking**

1) What is the kernel's most basic task? Handling interrupts

2) When an interrupt occurs, what part of the hardware state is saved by hardware? The program counter (PC), so the kernel knows where to resume

3) What is the difference between an interrupt and a context switch?  The kernel completely switches over to a different process instead of resuming the original one

4) Give an example of an event that might cause a process to move from the blocked to the ready state.  I/O process finishes so kernel can access disk

5) Why might a scheduler want to give higher priority to an I/O bound process? it makes a request and blocks before its time slice is complete

6) When I make French toast, I usually make a batch of 12 slices.  But my griddle only has room for 8 slices.
Each piece of toast has to cook for 5 minutes on each side.  How can I schedule 12 slices onto 8 "cores"
to minimize the elapsed time to cook all 12 slices?  (Note: this question is not hypothetical;
this is really how I make French toast.) Get a bigger griddle, 8 on their first side for 5 minutes, 4 on their second side and 4 on their first side for 5 minutes, 8 on their second side for 5 minutes.
