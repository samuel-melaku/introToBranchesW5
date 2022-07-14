#include <iostream>
#include <cmath>
using namespace std;

int main() {
int riderAge;
int riderHeight;

cout << "Your age: ";
cin >> riderAge;
cout << "Your height: ";
cin >> riderHeight;

if (riderAge < 10) {
   cout << "Can't ride. Too young";
}else if (riderAge > 80) {
   cout << "Can ride, but sure?";
} else if (riderHeight < 48 ) {
   cout << "Can't ride: Too short";
}else{
   cout << "Can ride";
}
    return 0;
}