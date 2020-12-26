/* Excercise Questions for Logical operators
  Author Majid Mujahid Hussain Dated 24th December 2020*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int a = 10,b = 12,c = 0;
//    printf("Hello world!\n");
//    printf("a = %d, b = %d, c = %d \n", a, b ,c);
//// first question
//    if(a != 6 && b > 5 )
//    {
//        printf(" 1 / true \n");
//    }
//    else
//    {
//      printf(" 0 / false \n");
//    }
//    // answer here is 1/ true because the value of a is 10 and b who's value is 12 > 5.
//    // Since both the conditions satisfy the condition answer is true because of &&(AND) .
//    //if even one of the condition does not satisfy then the answer will be 0/false.
//
//    // second question
//    if(a == 9 || b < 3 )
//    {
//        printf(" 1 / true \n");
//    }
//    else
//    {
//      printf(" 0 / false \n");
//    }
//    // answer here is 0/ false because the value of a is 10 and b who's value is 12 is not less than 3.
//    // even if one of the conditions satisfy the condition answer will be true because of || (OR).
//    //if even one of the condition does satisfy then the answer will be 1/true.
//
//    //Third Question
//        if(! ( a < 10 ))
//    {
//        printf(" 1 / true \n");
//    }
//    else
//    {
//      printf(" 0 / false \n");
//    }
//    // answer here is 1/ true because the value of a is 10 which is not less than 10.
//
//    //Fourth Question
//    if(! ( a > 5 && c ))
//    {
//        printf(" 1 / true \n");
//    }
//    else
//    {
//      printf(" 0 / false \n");
//    }
//    // answer here is 1/ true because the value of a is 10 which is greater than 5 and c.
//
//    //Fifth Question
//    if( 5 && c != 8 || !c )
//    {
//        printf(" 1 / true \n");
//    }
//    else
//    {
//      printf(" 0 / false \n");
//    }
//    //answer here is 1/true because the condition c!= 8 is true and 5 is not actually a condition.


// int i = 4, z = 12 ;
// if ( i = 5 || z > 50 )
// printf ( "\nDean of students affairs" ) ;
// else
// printf ( "\nDosa" ) ;
////answer here is Dean of Student Affairs because the condition of Z > 50 is true.
////but, if we change the || (OR) to && and then the answer will be Dosa.
//// || (OR) if even one of the condition is true than the answer will be 1/true.
//// && (AND) only if all the involved conditions will be true the answer will be 1/true otherwise, will be false.


// int i = 4, j = -1, k = 0, w, x, y, z ;
// w = i || j || k ;
// x = i && j && k ;
// y = i || j && k ;
// z = i && j || k ;
// printf ( "\n w = %d \n x = %d \n y = %d \n z = %d \n", w, x, y,z);
// //answer w = 1,because at any given time it is holding the value of i /or j /or k. || gives true if any of the condition is true.
// //answer x = o,because it can not hold all the values of i,and j ,and k. && gives true only if all the conditions are true.
// //answer y = 1,because at any given time it is holding the value of i /or j ,and k. || gives true if any of the condition is true.
// //answer z = 1,because at any given time it is holding the value of i ,and j /or k. || gives true if any of the condition is true.




// int i = -3, j = 3 ;
// if ( !ii + !j * 1 == 1 )
// printf ( "\nMassaro" ) ;
// else
// printf ( "\nBennarivo" ) ;
//
// //the answer is Bennarivo because there is no condition in the if statement.
// // therefore their will always be else to be picked.

// int a = 40 ;
// if ( a > 40 && a < 45 )
// printf ( "a is greater than 40 and less than 45" ) ;
// else
// printf ( "%d", a ) ;
//
// //here the answer is 40 which is the value of 'a', because the if condition is ( a > 40 && a < 45 ).

// int p = 8, q = 20 ;
// if ( p == 5 && q > 5 )
// printf ( "\nWhy not C" ) ;
// else
// printf ( "\nDefinitely C !" ) ;
//
// //here the answer is Definitely C ! because the value of p == 8 and the condition is ( p == 5 && q > 5 ),
// //if the condition was ( p == 8 && q > 5 ), the answer will be Why not C.

// int i = -1, j = 1, k ,l ;
// k = i && j ;
// l = i || j ;
// printf ( "%d %d", l, j ) ;
//
// //here the answer is 1 1, the first 1 is for 1/true because the ||/or gives true if any of the condition is satisfied.
// //and the second 1 is the value if j == 1.

// int x = 20 , y = 40 , z = 45 ;
// if ( x > y && x > z )
// printf( "x is big" ) ;
// else if ( y > x && y > z )
// printf( "y is big" ) ;
// else if ( z > x && z > y )
// printf( "z is big" ) ;
//
// //here the answer is suppose and is  z is big.

// int i = -1, j = 1, k ,l ;
// k = !i && j ;
// l = !i || j ;
// printf ( "%d %d", i, j ) ;
// //here the answer is -1 1 the value of i and j.

// int j = 4, k ;
// k = !5 && j ;
// printf ( "\nk = %d", k ) ;
// //the answer is 0/false.

// TO CHECK THE ERRORS IN THE PROGRAMS

/*1. This program
/* is an example of
/* using Logical operators */
// int i = 2, j = 5 ;
// if ( i == 2 && j == 5 )
// printf ( "\nSatisfied at last" ) ;
////no error in this piece of code.

//2. int code , flag  ;//need to hold some values to be compared to.
// if ( code == 1 & flag == 0 )
// printf ( "\nThe eagle has landed" ) ;


//3. char spy = 'a', password = 'z' ;
// if ( spy == 'a' or password == 'z' )//instead of or their needs to be | \ ||(OR)
// printf ( "\nAll the birds are safe in the nest" ) ;

// int i = 10, j = 20 ;
// if (i = 5 && j = 10)//to check for the comparision we need == sign
// {
//    printf ( "\nHave a nice day" ) ;
// }
// int x = 10 , y = 20;
// if ( x >= 2 and y <=50 )//we need to type &/&& instead of &&.
// printf ( "\n%d", x ) ;
//

// int a, b ;
// if ( a == 1 & b == 0 )//their is a need of some values in a and b.
// printf ( "\nGod is Great" ) ;

// int x = 2;
// if ( x == 2 && x != 0 ) ;//there is no need to type a semicolon at the end of the if statements.
//  {
//    printf ("\nHi") ;
//    printf ("\nHello") ;
//  }
//
// else
// {
//     printf( "Bye") ;
// }

// int i = 10, j = 10 ;
// if ( i && j == 10)
// printf ( "\nHave a nice day" ) ;
// //no errors in this piece of code.
//
    return 0;
}
