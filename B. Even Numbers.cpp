	#include <iostream>
	using namespace std;
	int main()
	{
		int n, i, even = 0;
		cin >> n;
		for (i = 0; i < n; i++) {
			if ((i + 1) % 2 == 0) {
				cout << i + 1 << endl;
				even++;
			}
		}
		if (even == 0) {
			cout << -1;
		}
		return 0;
	}
