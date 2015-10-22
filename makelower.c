#include "makelower.h"
int makelower(char c) {
	if (c >= 'A' && c <= 'Z')
		return tolower(c);
	return c;
}
