#include <iostream>
#include <cmath>
using namespace std;

int main() {
int hotelRate;
int userAge;

hotelRate = 155;
cout << "Your age: ";
cin >> userAge;

if (userAge > 65) {
   hotelRate = hotelRate - 20;
}
cout << "Your rate: ";
cout << hotelRate;
return 0;
}