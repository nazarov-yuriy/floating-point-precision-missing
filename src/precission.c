#include <stdio.h>
#include <stdlib.h>

void substraction_nearest_values(){
	float a = 1000000.0;
	float b = 0.1;
	float ab,abab,aa,result;
	ab = a+b;
	abab = ab * ab;
	aa = a*a;
	result = abab - aa;
	printf("(a+b)^2 - a^2 = %f*%f - %f*%f = %f = 2*a*b - b*b = %f\n", ab, ab, a, a, result, 2*a*b-b*b);
}

int main(void) {
	substraction_nearest_values();
	return EXIT_SUCCESS;
}
