/**********************************************************************************************************************
                                                Program 003 Add up two numbers
Create Date  : May 12, 2021
Author       : Wu Chu Peng
Description  : In this program, we create two interger value, and assign the value to them. At last we will use the
               addition operational symbol to add them up and print them on the console.
Version      : 1.0
Function List: None
/**********************************************************************************************************************/



/**********************************************************************************************************************
                                                     Header files
/**********************************************************************************************************************/
#include <stdio.h> // Standard Input and Output library



/**********************************************************************************************************************
                                                       Function
/**********************************************************************************************************************/

/*******************************************************************************************
Function    : main
Description : the main function in this program
Input       : None
Return      : 0
*******************************************************************************************/
int main(void)
{
  // ========== Local Value ========== //
  int iNumber1 = 0; // create the first integer value
  int iNumber2 = 0; // create the second integer value
  int iSum = 0;     // the sum of the value 
  
  // ========== Function ========== //
  // Assign the value
  iNumber1 = 2021; // assign a number to the value
  iNumber2 = 1999; // assign a number to the value
  
  // Add up to number
  iSum = iNumber1 + iNumber2; // add up two numbers, and assign to the sum
	
  // Show the information
  printf("%d plus %d equals %d\n", iNumber1, iNumber2, iSum); // show the result 
  
  // End program
  return 0; // return 0
}
