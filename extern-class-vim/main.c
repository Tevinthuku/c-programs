#include <stdio.h>

int count ;
// the extern function
extern void write_extern();

main() {

	count = 5;
	write_extern();
}
