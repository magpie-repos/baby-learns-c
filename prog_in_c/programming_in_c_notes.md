# Programming in C (4th ed) - by Stephan G Kochan
## 1 -  Introduction
- The operations a particular computer is able to perform is called an *instruction set*
- A program is a set of instructions that solve a particular problem
- An algorithm is the the steps that a program goes through
- Program dev goes like this:
    Problem > Algorithm > Progam > Solution/Solving
- A compliler converts a C program into a sequence of assembly instructions appropriate for a given system
- NOTE: This is often a nonlinear process involving recursive adjustments, optimizations, and pulling in of
    related files

### Compilation Steps
    source file > preprocess > syntax check > assembly > object code > linking > executable file
### Ececution Steps
    executable file > load into memory > sequential execution of instructions

- An alternative to compiled languages are interpreted languages (BASIC and JavaScript)
- Interpreted languages are executed and evaluated at runtime, allowing for easier debug at the cost of worse speed

## 2 - Compiling and Running Your First Program
- When using gcc to compile, you can specify the name of the output file using the -o argument:
    ```bash gcc prog-file.c -o output-name```
- The statement printf() is evaluated in the preprocessing step
- the (void) part of:
```c
int main(void):
```
specifies that the function recieves no arguments
- An alternate way to introduct the main fucntion is like this:
```c
int main(int argc, char \*argv[])
```
- The stuff in the () are the arugments taken for the printf function
- Question: what constitutes a statement? If all statements must end with a ;, then how do you
    determine what is and isn't a statement?
- Using the newline '\n' character you can use a single printf statement to span multiple lines 
- printf() is capable of displaying the contents of variables as well as constants
- C required variable types be declared
- When printf() takes two arguments, the first line is always the String to be displayed:
```c
printf("String to be displayed", arg2);
```
- The '%' character followed by a letter is a special character that printf() recognizes:
    - The letter following the '%' is the type of data to be displayed (eg '%i' refers to data of
    type integer)
    - The second argument of printf() is then converted to a string and inserted into the main
    string in place of the '%'
- You can string multiple '%'s in a a single printf call and then list each value to sub in sequentially after the string
- You can create multiple variables of a single type in a single statement by listing them out seperated with commas
- The first argument of printf() is often called the *format string*
- You can create comments like so:
```c
//This is a single-line comment
\*This is a multi-line comment
    look ma! Two lines!!!
*/
```
- Make sure to use comments judiciously; Adding too many, or too ovbious comments harms readability, while adding notes to opaque statements can save you or somebody else a lot of headache
- It's generally a good idea to put a comment at the start of a program that describes
what it's supposed to do. 





