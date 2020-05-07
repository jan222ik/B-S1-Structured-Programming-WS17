// Summe von i=0 nach n-1 (z^i/i!)

double expoFunction(int n, double z){
	int i = 1;
	double sum = 0;
	factorial = 1;
	zProduct = 1;
	result = 0;
	while (i<n) {
		factorial = factorial*i;
		zProduct = zProduct * z;
		result += zProduct/factorial;
	}
	return result
}