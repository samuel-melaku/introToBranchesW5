#include <iostream>
#include <cmath>
using namespace std;

int main() {
int numYears;

cout << "Enter a number: ";
cin >> numYears; 

if (numYears == 1){
   cout << "Newlyweds";
} else if (numYears == 25) {
   cout << "Silver";
} else if (numYears == 50) {
   cout << "Golden";
}else {
   cout << "Congrats";
}
    return 0;
}