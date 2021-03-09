# sbrk-bonus-problem
Write a user program that grows its address space by one byte by calling sbrk(1) . Run the program and investigate the page table for the program before the call to sbrk and after the call to sbrk . How much space has the kernel allocated? What does the PTE for the new memory contain?

Here are some tips:
1. Create a new branch
2. Create a system call "int vmprint(void)" that prints the page table of the current process. You can use the function vmprint you made in a previous lab to implement the system call.
3. Write a new user program "quiz.c" as per the instructions above.
4. Run the file and observe the output.
