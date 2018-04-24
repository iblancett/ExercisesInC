## Homework 11

### C Exercises

Modify the link below so it points to the `ex11` directory in your
student repository.

[Here is a link to the ex11 directory in my repository](https://github.com/iblancett/ExercisesInC/tree/master/exercises/ex11)

### Think OS Chapter 11 reading questions

1) Why is is a bad idea to pass a `sem_t` as a parameter? Because when passing it as an arg, you are making a copy of it, and the behavior of the copy is undefined

2) When you use a Semaphore as a mutex, what should its initial value be? 1, to signify that one thread can access it

3) Can you think of another use for a Semaphore where you might use a different initial value? Possibly to limit the number of threads that go through, but not necessarily block everything except one thread.

4) In my solution to the producers-consumers problem using Semaphores,
what does it mean if the value of `queue->spaces` is `3` at some point in time? There are three producer threads that can execute queue_push without blocking.

5) What does it mean if `queue->space` is `-3`? There are 4 producer threads that need to be freed up before another producer thread can execute queue_push

6) Why doesn't `queue_pop` have to use `queue_empty` to check whether the queue is empty?  The semaphore keeps track of the queue status.

7) Any problem that can be solved with Semaphores can also be solved with mutexes and condition variables.
How can you prove that that's true? By implementing a semophore using condition variables and mutexes

8) What is Property 3?  Hint: see *The Little Book of Semaphores*,
[Section 4.3](http://greenteapress.com/semaphores/LittleBookOfSemaphores.pdf).  if there are threads waiting on a semaphore when a thread executes signal, then one of the waiting threads has to be woken
