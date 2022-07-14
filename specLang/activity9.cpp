#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userAge;
int insurancePrice;

cout << "Your age: ";
cin >> userAge;

// 15 and under
if (userAge < 16) {
   cout << "Too young";
   insurancePrice = 0;

// 16 - 24
}else if (userAge < 25) {
   insurancePrice = 4800;

// 25 - 39
}else if (userAge < 40) {
   insurancePrice = 2350;

// 40 and above
} else if (userAge > 40) {
   insurancePrice = 2100;
}
cout << "Annual price: $ ";
cout << insurancePrice;
    return 0;
}