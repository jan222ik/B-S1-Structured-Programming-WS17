#include "Task2.h"
int sum(int n) {
	if (n > 0) {
		return sum(n - 1) + n;
	}
	return 0;
}
