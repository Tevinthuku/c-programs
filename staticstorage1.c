/* with static storage the local variable 
 * is in existence during the life cycle o
 * of the program
 * it does not get destroyed and recreated each time it
 * is needed
 *
 */
#include <stdio.h>
/* function declaration*/

void func(void);

static int count = 5; /* global variable*/

main() {
	// the while function. comes by default in c
	while(count--) {
	 func();
	}

	return 0;
}

/* the functio definition*/

void func(void) {
	static int i = 5; // local static variable
	// increment of i by one
	//
	i++;

	print("i is %d and count %d\n", i, count);
}
