#include <iostream>
using namespace std;
int main()
{
	int n, i; 
	bool test = false;
	cin >> n;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			test = true;
			break;
		}
	}
	if (test) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	return 0;
}
