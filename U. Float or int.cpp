#include <iostream>
using namespace std;
int main()
{
	double n;
	cin >> n;
	float c = n - (int)n;
	if (c == 0) {
		cout << "int " << (int)n;
	}
	else {
		cout << "float " << (int)n << " " << c;
	}
	return 0;
}
