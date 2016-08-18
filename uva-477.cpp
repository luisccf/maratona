#include <bits/stdc++.h>
using namespace std;
typedef struct rectangle {
	int i;
	pair<double, double> c1;
	pair<double, double> c2;
} rectangle;

typedef struct circle {
	double i;
	pair<double, double> center;
	double radius;
} circle;

int main() {
	char figure;
	scanf("%c", &figure);
	vector<rectangle> rectangles;
	vector<circle> circles;
	int counter = 1;
	while (figure != '*') {
		if (figure == 'r') {
			double x1, y1, x2, y2;
			scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
			rectangle r;
			r.c1 = make_pair(x1, y1);
			r.c2 = make_pair(x2, y2);
			r.i = counter++;
			rectangles.push_back(r);
		} else if (figure == 'c') {
			double x, y, radius;
			scanf("%lf %lf %lf", &x, &y, &radius);
			circle c;
			c.center = make_pair(x, y);
			c.radius = radius;
			c.i = counter++;
			circles.push_back(c);
		}
		scanf("%c", &figure);
	}
	double x, y;
	counter = 1;
	while (scanf("%lf %lf", &x, &y) == 2) {
		vector<bool> v(rectangles.size() + circles.size(), false);
		if (x == 9999.9 && y == 9999.9)
			break;
		for (int i = 0; i < rectangles.size(); i++) {
			double x1 = rectangles[i].c1.first;
			double y1 = rectangles[i].c1.second;
			double x2 = rectangles[i].c2.first;
			double y2 = rectangles[i].c2.second;
			if (x > x1 && x < x2 && y < y1 && y > y2) {
				v[(rectangles[i].i)-1] = true;
			}
		}
		for (int i = 0; i < circles.size(); i++) {
			double centerx = circles[i].center.first;
			double centery = circles[i].center.second;
			double radius = circles[i].radius;
			double distance = sqrt(pow(centerx-x, 2)+pow(centery-y, 2));
			if (distance < radius) {
				v[circles[i].i-1] = true;
			}
		}
		bool contained = false;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]) {
				contained = true;
				printf("Point %d is contained in figure %d\n", counter, i+1);
			}
		}
		if (!contained)
			printf("Point %d is not contained in any figure\n", counter);
		counter++;
	}
}
