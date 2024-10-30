#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
int main() {
    int x, y;
    cout << "enter two integers: ";
    cin >> x >> y;
    cout << "sum: " << sum(x, y) << endl;
    return 0;
}