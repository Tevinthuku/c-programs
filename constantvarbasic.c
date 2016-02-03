#include <stdio.h>

int main(){
/* its good practice to have the const 
 * variable names in capital letter
 */
const int LENGTH = 10;
const INT WIDTH = 5;
const char NEWLINE = '\n';
// variable for the arae
int area;

area = LENGTH * WIDTH;

printf("Value of area : %d", area);

printf("%c", NEWLINE);

return 0;
   }
