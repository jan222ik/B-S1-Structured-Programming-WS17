double expoFunction2(int n, double z) {
	int i = 1;
	double sum = 0;
	int factorial = 1;
	double zProduct = 1.0;
	double result = 0;
	while (i<n) {
		factorial = factorial * i;
		zProduct = zProduct * z;
		result += zProduct / factorial;
	}
	return result;
}