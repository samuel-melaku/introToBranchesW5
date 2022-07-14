#include <iostream>
#include <cmath>
using namespace std;

int main() {
int x;
int y;
int max;

cout << "Enter a number: ";
cin >> x;
cout << "Enter a number: ";
cin >> y;

if (x > y ){
   max = x;
}else {
   max = y;
}
cout << max;
    return 0;
}