#include <bits/stdc++.h>
using namespace std;

int main() {

	double n_sides;
	double radius;
	while (scanf("%lf %lf", &radius, &n_sides) == 2) {
		double triangle_angle = M_PI / n_sides;
		double triangle_base = radius * (sin(triangle_angle));
		double height = sqrt(pow(radius, 2) - pow(triangle_base, 2));
		double triangle_area = triangle_base * height;
		double porygon_area = n_sides * triangle_area;
		printf("%.3lf\n", porygon_area);
	}
	return 0;
}