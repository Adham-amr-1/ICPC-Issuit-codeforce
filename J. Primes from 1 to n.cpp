#include <iostream>
using namespace std;
int main()
{
	int n, i, k;
	cin >> n;
	for (i = 2; i <= n; i++) {
		bool test = true;
		for (k = 2; k <= (i/2); k++) {
			if (i % k == 0) {
				test = false;
				break;
			}
		}
		if (test) {
			cout << i << " ";
		}
	}

	return 0;
}
