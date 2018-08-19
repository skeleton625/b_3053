#include <cstdio>
#define PI 3.14159265358979323846

double n;
int main() {
	scanf_s("%lf", &n);
	printf("%lf\n", PI*n*n);
	printf("%lf", 2 * n*n);
	return 0;
}