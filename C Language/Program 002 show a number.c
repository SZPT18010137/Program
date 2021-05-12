/***********************************************************************************
                          Program 002 Show a number
Create Date  : May 12, 2021
Author       : Wu Chu Peng
Description  : In this program, we will print a number to console. In C language, 
               there are value to store the value you want to store. So we create
               a value, which type is integer. And we assign a number to it. At 
               last we print it to the console.
Version      : 1.0
Function List: None
***********************************************************************************/

/***********************************************************************************
                              Header files
***********************************************************************************/
#include <stdio.h> // Standard Input and Output library

/*************************************************
Function    : main
Description : the main function in this program
Input       : None
Return      : 0
*************************************************/
int main(void)
{
  // ========== Local Value ========== //
  int iNumber = 0; // create a integer value
  
  // ========== Function ========== //
  // Assign the value
  iNumber = 2021; // assign a number to the value.
  
  // Show the information
  printf("The value of the number is %d\n", iNumber); // show the result 
  
  // End program
  return 0; // return 0
}
