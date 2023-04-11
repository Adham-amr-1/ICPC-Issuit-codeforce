#include <iostream>
using namespace std;
int main() {
	long long n, k, a;
	cin >> n >> k >> a;
	
	if ( n*k % a != 0) {
		cout << "double";
	}
	else {
		long long res = n * k / a;
		if (res <= 2147483647) {
			cout << "int";
		}
		else if (res <= 9223372036854775807) {
			cout << "long long";
		}
	}
	return 0;
}
