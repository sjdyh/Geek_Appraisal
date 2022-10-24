#include <stdio.h>

int main() {
	double a = 1, h = 0.001;
	printf("please enter the initial value a= ");
	//scanf("%lf", &a);
	double x = 0, y1 = a, dy_dx = -a, y2 = a - 1, y = a;
	for (int i = 0; y1 - y2 > 0.001 * h; i++) {
		y1 = y;
		dy_dx = -y1;
		x = x + h;
		y = y + h * (dy_dx);
		y2 = y;
		printf("x=%lf      yn=%lf\n", x - h, y - h * (dy_dx));
	}
	printf("final value is %f", y);
	return 0;
}


