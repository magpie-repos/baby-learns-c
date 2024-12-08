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
```c
'b'  '5'  '^' //These are all chars 
```
- You can distinguish chars from Strings by looking at the type of qutation marks
    - "a" is for a string
    - 'a' is for a char
- The format string for a char is '%c'
### On \_Bool (Boolean Data Type)
- The exact size of a bool isn't specified by C, but it always enough to store 0 or 1
- 0 is used to represent false, and 1 to represent true
- Any value aside from zero will be equivalent to 1 when assigning a bool 
```c <stdbool.h>
```
 is a header file that streamlines using bools
### Type Specifiers
- adding long can add to the precision of a number, but there isn't a hard definition 
for how many bits a long int is vs a normal int.
- You can implicitly define a int as an int long by adding an l to the end of number:
```c
int val1 = 12345L;
int val2 - 12345l;
long int val3 = 12345; //These values are equivalent
``` 
- Displaying a long int through printf() requires adding the letter l to the format character
```c
long int coolNum  0xff00;
printf("The best possible value is %lx.\n", coolNum);
```
- You can also declare long long ints, which are guarenteed to be at least 64 bits:
```c
long long int cursedSyntax = 017510;
printf("hehe i can make the calculator say %lli\n", cursedSyntax);
//Note that you now have to use an extra l when displaying the number in printf()
```
- You can also declare long floats or doubles
```c
double longDbl = 0.5e+4l;
long float lFloat = 555555555.1;
printf("sned me %Lf biteocin or i will hakc ur account!\n", longDbl);
//Note the l in the format character is upper case rather than lower with the long int
printf("Unfortunately, you are in violation of state stature number %Lf.\n", lFloat);
//I am beginning to understand why C is a cursed language...
```
- In opposition to the long modifier is the short modifier
- Short is guarenteed not to be smaller than 16 bits, but other than that has no set value
- A way to conserve memory space
- No direct way to declare a constant as a short int, but you can display short ints with printf()
```c
printf("This is a short constant: %hi.\n", varName);
//For some god-forsaken reason you use h instead of s (maybe because %s is used already?)
```
- An int can be modified to be unsigned as well, declared by adding U to the value
```c
int val1 = 80085ul; //Note you can combine the long and unsigned modifier
```
- The compiler does some wierd shit to ints:
```
if val too big for int > convert to unsigned int
elif val too small for unsigned int > convert to long int
elif val doesn't fit in long int > convert to unsigned long int
elif val doesn't fit in unsigned long int > convert to long long int
else > convert to unsigned long long int
```
- Because god is a flat inverted circle, you can omit they keyword int when declaring any non-vanilla variant of int:
```c
unsigned value1 6666969;
long value 2 8;
unsigned long long var1 5;
//I am filled with both despiar and fascination.
```
- For symmetry sake, you can also explicitly declare an int to be 'signed'
### Working With Variables
- C var names can have digits, letters (up or low), and underscores
    - NOTE: A var name cannot begin with a number!
    - NOTE: A var name cannot be a reserved word like int
- Different capitalization results in distinct variables
- Variable names longer than 63 characters are cut down to 63 characters
    - Apparently in some cases only the first 31 characters are considered
- Good variables names can act as self-documentation
### Working with Arithmetic Expressions
- +, -, /, * are all considered binary operators beacuse they take two values
- Operators are evaluated in order highest precedence first
- If operators have equal precedence, evaluate from left to right
### Integer Arithmetic & The Unary Minus Operator
- In integer arithmetic, anything aftr the integer is discarded
    - Built-in, always rounded down to nearest whole number
- Floats let you use decimals but at the cost of efficiency. If you can use an int, use an int.
- A *unary operator* is an operator that takes only a single value
    - ex: putting a '-' before a value like with -5
- The unary minus (-) operator has the highest precedence
#### The Modulus Operator
- The modulo operator gives the remainder of dividing a by b where a % b
- % has the same precedence as * and /
#### Integer and Floating Point Conversions

        #NOTE: LEFT OFF AT PG 61


















