/*1.Write a c program to print the back slash \

Input Format

Nill

Constraints

Nill

Output Format

Display the \

Sample Input 0

\
Sample Output 0

\ */

//solutions:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    printf("\\\n");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

/*2.Write a c program to display the \n

Input Format

Nill

Constraints

Nill

Output Format

Display the \n

Sample Output 0

\n

sollution : */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 printf("\\n");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

/*3.Write a c program to display the %

Input Format

Nill

Constraints

Nill

Output Format

%%

Sample Output 0

%% 

sollution : */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("%%%\n");


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

/*
4.Write a c program to display the output

Input Format

Nill

Constraints

Nill

Output Format

Display the string

Sample Output 0

Let's learn 'C' together with MySlate team

sollution*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("Let's learn 'C' together with MySlate team");
  
    return 0;
}

/*5.Print the following output:

Success is when your "signature" becomes "autograph"

Input Format

Nill

Constraints

Nill

Output Format

Display the given output

Sample Output 0

Success is when your "signature" becomes "autograph"

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
printf("Success is when your \"signature\" becomes \"autograph\"\n");
    return 0;
}

/*6.Write a c program to accept a character from the user and print the character

Input Format

Input will be a character

Constraints

Nill

Output Format

Display the accepted character

Sample Input 0

a
Sample Output 0

a

sollution:*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    char ch;  
    scanf("%c", &ch);  
    printf("%c\n", ch);
    return 0;

}

/*7.Write a c program to accept an integer from the user and print the number along with its sign.

Input Format

Input will be an integer

Constraints

Nill

Output Format

Display the integer along with its sign

Sample Input 0

20
Sample Output 0

+20
Sample Input 1

-20
Sample Output 1

-20

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    int num;  // Variable to store the integer

    // Read an integer from the user

    scanf("%d", &num);

    // Print the number with its sign

    if (num >= 0) {

        printf("+%d\n", num);  // Positive numbers (including zero)

    } else {

        printf("%d\n", num);   // Negative numbers

    }

    return 0;

}

/*8.Write a C program to accept 2 numbers, print the first number as a 5-digit number and print the second number in the next line with 5 width space

Input Format

Input two integers

Constraints

Nill

Output Format

Display the value in the corresponding width

Sample Input 0

25 98
Sample Output 0

00025
   98

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num1, num2;

    // Read two integers from the user

    scanf("%d %d", &num1, &num2);

    // Print the first number as a 5-digit number with leading zeros

    printf("%05d\n", num1);

    // Print the second number with a width of 5 spaces

    printf("%5d\n", num2);

    return 0;

}

/*9.Write a c program to accept the integer value and display the integer

Input Format

Accept an integer

Constraints

Nill

Output Format

Display the integer

Sample Input 0

20
Sample Output 0

20

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int number;

    // Accepting the integer input from the user

    //printf("Enter an integer: ");

    scanf("%d", &number);

    // Displaying the integer

    printf("%d\n", number);

    return 0;

}

/*10.Write a C program to display the value of PI accurate to 12 decimal places.

Input Format

Nill

Constraints

Nill

Output Format

Display the PI value

Sample Output 0

3.142857142857

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    // Define the value of PI

    double pi =3.142857142857 ;

    // Display the value of PI with 12 decimal places

    printf("%.12f\n", pi);

    return 0;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   
}

