#include "ctime.h"

int main() {
	CTime t1;
	CTime t2(12, 45, 55);
	CTime t3(t2);

	return 0;
}