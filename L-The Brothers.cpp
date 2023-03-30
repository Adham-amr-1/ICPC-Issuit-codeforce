#include <iostream>
using namespace std;
int main() {
    string first1, second1, first2, second2;
    cin >> first1 >> second1 >> first2 >> second2;
    if (second1 == second2) {
        cout << "ARE Brothers";
    }
    else {
        cout << "NOT";
    }
    return 0;
}
