#include<stdio.h>
int main()
{
	double a, h = 0.001;
	printf("please enter the initial value a= ");
	scanf("%lf", &a);
	double x = 0, y1 = a, dy_dx = -a, y2 = a - 1, y = a;
	for (int i = 0; x<25; i++)
	{
		y1 = y;
		dy_dx = -y1;
		x = x + h;
		y = y + h * (dy_dx);
		y2 = y;
		printf("当x=%lf      yn=%lf\n", x - h, y - h * (dy_dx));
	}
	printf("最终定态为%f", y);
	return 0;
}
