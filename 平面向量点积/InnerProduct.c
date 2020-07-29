#include <stdio.h>
struct Vec {
	double x;
    double y;
};

int main() {
	struct Vec Vec1, Vec2;
	scanf("%lf%lf%lf%lf",&Vec1.x, &Vec1.y, &Vec2.x, &Vec2.y);
	printf("%.3f\n", Vec1.x*Vec2.x+Vec1.y*Vec2.y);
	return 0;
}
