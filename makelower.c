#include "makelower.h"
int makelower(char c) {
	if (c >= 'A' && c <= 'Z')
		c=tolower(c);
}
