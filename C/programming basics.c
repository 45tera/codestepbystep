/*Useful Reads:
https://www.geeksforgeeks.org/escape-sequence-in-c/
*/

//Exercise 1: hello_world
/*Write a complete C program with a main function that prints the following console output:

Hello, world!
(You don't need to write any 'include' statements.)*/

int main() {
  printf("Hello, world!");
  return 0;
}

// OR

void main(){
  return printf("Hello, world!");
}

//Exercise 2: basic_function_calls
/*What is the output of the following program?

void message1() {
    printf("This is message1.\n");
}

void message2() {
    printf("This is message2.\n");
    message1();
    printf("Done with message2.\n");
}

int main() {
    message1();
    message2();
    printf("Done with main.\n");
    return 0;
} 
*/

/* ANSWER:
  This is message1.
  This is message2.
  This is message1.
  Done with message2.
  Done with main.*/

//Exercise 3: cat
/*Write a function named cat that prints the following output:

/\   /\
 .   .
   -
 "" "" 
 */

void cat(){
    printf("/\\   /\\\n");
    printf(" .   .\n");
    printf("   -   \n");
    printf(" \"\" \"\"");
}

//Exercise 4: egg_figures
/*Write a complete program with a main function that prints these figures using functions.

  ______
 /      \
/        \
\        /
 \______/
 
\        /
 \______/
+--------+

  ______
 /      \
/        \
|  STOP  |
\        /
 \______/

  ______
 /      \
/        \
+--------+

*/

int main (){
    up_half();
    down_half();
    printf("\n");
    down_half();
    line();
    printf("\n");
    up_half();
    stop();
    down_half();
    printf("\n");
    up_half();
    line();
    return 0;
}

void up_half(){
    printf("  ______  \n");
    printf(" /      \\ \n");
    printf("/        \\\n");
}

void down_half(){
    printf("\\        /\n");
    printf(" \\______/\n");
}

void line(){
    printf("+--------+\n");
}

void stop(){
    printf("|  STOP  |\n");
}

//Exercise 5: escape_sequence1
/* 1. \\ - rationale -> every 2 backslash, 1 escapes, hence only 2 blackslashs. Ignore the last \n as that means to 
   2. '
   3. """
*/

//Exercise 6: escape_sequence2
/*
Write a statement to produce this output:

/ \ // \\ /// \\\ //// \\\\
*/

void main(){
    printf();
  }

//Exercise 7: escape_sequence3




//Exercise 8: function_tracing1
/*
What is the output of the following code?

void message1() {
    printf("7 ");
}

void message2() {
    printf("5 ");
    message1();
    printf("6 ");
}

int main() {
    message1();
    message2();
    printf("4 ");
    return 0;
}
*/

// ANSWER : 7 5 7 6 4 
// Tip - Be careful of the spaces.

//Exercise 9: function_tracing2
/*
What is the output of the following code?

void first() {
    printf("1 ");
}

void second() {
    printf("2 ");
    first();
}

void third() {
    printf("3 ");
    first();
    second();
}

int main() {
    second();
    first();
    second();
    third();
    return 0;
}
*/

//ANSWER: 2 1 1 2 1 3 1 2 1 
// Tip - Be careful of the spaces and the functions.

//Exercise 10: function_tracing3
/*
void function_a() {
    printf("A ");
}

void function_b() {
    function_a();
    printf("B ");
}

void function_c() {
    function_b();
    printf("C ");
    function_a();
}

int main() {
    function_a();
    function_b();
    function_c();
    function_b();
    return 0;
}
*/

//ANSWER: A A B A B C A A B 

//Exercise 11: receipt
/*
The following console program is redundant. Rewrite it to use variables and expressions so that calculations are not repeated.

int main() {
    // Compute total owed, assuming 8% tax and 15% tip
    printf("Subtotal: $%.02f\n", (38 + 40 + 30));
    printf("Tax: %.02f\n", (38 + 40 + 30) * .08);
    printf("Tip: %.02f\n", (38 + 40 + 30) * .15);
    printf("Total: %.02f\n", (38 + 40 + 30 + (38 + 40 + 30) * .08 + (38 + 40 + 30) * .15));
}
*/


//Exercise 12: receipt
