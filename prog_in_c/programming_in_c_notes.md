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
## 3 - Variables, Data Types, and Arithmetic Expressions
- C comes provides 5 basic data-types:
    - **int** - used to contain integral values (no decimal places)
    - **float** - Floating point number; A value that can contain decimal places
    - **double** - Floating point but with ~double the precision of **float**
    - **char** - Can contain a single character (i.e. 'a', '{', or '4')
    - **Bool** - Stores either 0 or 1; Good for values that can only have two distinct and opposing states (aka "binary choices")
- A constant is any numerical value, character, or string of characters
### On int (Integer Type)
- A value composed of at least one digit
- An int value doesn't have to be in base 10, octal and hexadecimal are also allowed
- An octal value can be declared by leading the value with the digit '0'
```c 
int val1 = 02235;
int val2 = 1181; //These two values are equivalent
```
- A hex value can be declared by leading the value with '0x'
```c
int num1 = 0xFA7901D;
int num2 = 262639635; //These two values are equivalent
```
- Both octal and hex can be inserted into a printf() statment with the following format character:
    - %o  //Displays octal w/o a leading zero
    - %#o //Displays octal w a leading zero
    - %x  //Displays hex w/o the leading '0x' and uses lowercase letters
    - %X  //Same as above but with uppercase letters
    - %#x //Displays hex w/ leading '0x' and with lowercase letters
    - %#X //Same as above but w/ uppercase letters
- The actual amount of memory that an int takes up is dependent on the computer, but is guarenteed to be at least 32 bits
### On float (Floating Number Type)
- You can insert a float into a printf() using the characters '%f'
- floats can be expressed in scientific notation
```
    4.655e6    //AKA 4.655 x 10^6
    0.223-e-4  //AKA 0.223 x -10^-4
```
- You can display a float in scientific notation using the characters '%e'
- You can also use the characters '%g' to let printf() decide on either decimal or scientific base on the following rule:
    - If the exponent would be greater than 5, or less than -4, then scientific notation will be used
- Supposedly using '%g' is "more aesthetic"
### On double (Extended Precision Type)
- Basically a better version of float
- Typically uses 64 bits
- All decimal constants are interpreted as doubles unless explicitly stated otherwise like this:
```c
6894.4    //This is a double
0.3345f   //This is a float
```
- Use the same format strings as float uses to printf()
### On char (Single Character Type)
- Character constants are declared by enclosing a character in single quotation marks:
```c 'b'  '5'  '^' //These are all chars ```































