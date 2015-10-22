#include <stdio.h>
#include "makelower.h"

int main(int argc, char* argv[]) {
	char c;
	c=getchar();
	while (c!=EOF) {
		printf("%c",makelower(c));
		c=getchar();	
	}
	return 0;
}

