/*Useful Reads:
https://www.geeksforgeeks.org/java-cheat-sheet/#hello-world
*/

//Exercise 1: hello_world
/*Write a console program in a class named Hello that prints the following console output:

Hello, world!
(You don't need to write any 'import' statements.)*/

class Hello{
    public static void main (String[] args){
        System.out.println("Hello, world!");

    }
}

//Exercise 2: FearTheTree
/*
Write Java statements that print the following console output:

\\\\\\\\\\\\\\\\\\\\
|| FEAR THE TREE! ||
////////////////////
*/

System.out.println("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
System.out.println("|| FEAR THE TREE! ||");
System.out.println("////////////////////");

//Exercise 3: LearningToProgram
/*
Modify the following program so that it prints the following output (including the blank lines):

Hello, world!
I am learning to program in Java.
I hope it is a lot of fun!

I hope I get a good grade!

Maybe I'll change my major to computer science.
===============================================
public class LearningToProgram {
    public static void main(String[] args) {
        System.out.println("Hello, world!");
    }
}
*/

public class LearningToProgram {
    public static void main(String[] args) {
        System.out.println("Hello, world!");
        System.out.println("I am learning to program in Java.");
        System.out.println("I hope it is a lot of fun!");
        System.out.println("\nI hope I get a good grade!\n");
        System.out.println("Maybe I'll change my major to computer science.");
    }
}

//Exercise 5:  Tricky
/*
The following program contains 11 errors. Find them all and correct the code so that it compiles and runs successfully.
===============================================
public class Tricky
    public static main(String args) {
        System.out.println(Hello world);
        system.out.Pritnln("Do you like this program"?);
        System.out.println()

        System.println("I wrote it myself.";
    {
}
*/

public class Tricky{
    public static void main(String[] args) {
        System.out.println("Hello world");
        System.out.println("Do you like this program?");
        System.out.println();

        System.out.println("I wrote it myself.");
    }
}

//Exercise 6:   Receipt
/*
The following console program is redundant. Rewrite it to use variables and expressions so that calculations are not repeated.
===============================================
public class Receipt {
    public static void main(String[] args) {
        // Compute total owed, assuming 8% tax and 15% tip
        System.out.println("Subtotal: " + (38 + 40 + 30));
        System.out.println("Tax: " + (38 + 40 + 30) * .08);
        System.out.println("Tip: " + (38 + 40 + 30) * .15);
        System.out.println("Total: " + (38 + 40 + 30 + (38 + 40 + 30) * .08 + (38 + 40 + 30) * .15));
    }
}
*/
