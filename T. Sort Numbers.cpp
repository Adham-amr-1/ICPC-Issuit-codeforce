#include <iostream>
using namespace std;
int main()
{
	int a, b, c, max, min, mid;
	cin >> a >> b >> c;
	min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	mid = a + b + c - min - max;
	cout << min << endl << mid << endl << max << endl << endl;
	cout << a << endl << b << endl << c;

	return 0;
}
