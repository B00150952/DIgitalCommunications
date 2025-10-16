/* Mark Deegan Sun 27 Oct 2024 12:35:26 GMT
Simple programme to illustrate scanning for input on the command-line 
MD20241027-04
*/

/* this is a pre-processor directive and it tells the compiler to 
include the definitions contained in stdio.h when compiling this code a
That file defines, among other things, the printf() function that we 
use below */
#include <stdio.h>

/* start defining the main() method 
Every C programme requires one and only one main method which is where the
programme will commence execution */

#include <stdio.h>

int main()
{ // start declaring main method

   int price, quantity, total; 			// declare three integer variables price, quantity and total

   printf("Enter price and quantity: ");	// ask the user to enter price and quantity
   scanf("%d %d", &price, &quantity);		// uae scanf to read the keyboard for two integers and to store themn in &price and &quantity

   total = price * quantity;			// calculate the total = price * quantity

   printf("Total : %d \n", total);		// print the total
   
   return 0;					// return success code 0
} // end declaring main method
