#include <stdio.h>
// using define to define a constant
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(){
// area integer
	int area;
// GETTING THE AREA
	area = LENGTH * WIDTH;

	// print out hte value of the area
	printf("Value of the area: %d", area);

	// print the NEWLINE CONSTANT
	
	printf("%c", NEWLINE);

	return 0;

}
