#include <iostream>
#include <cmath>
using namespace std;

int main() {
int val;

cout << "Enter a number: ";
cin >> val;

if (val < 0) {
   val = -val;
}
cout << val;
    return 0;
}