#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userAge;
int insurePrice;

cout << "Your age: ";
cin >> userAge;

if (userAge < 25) {
   insurePrice = 4800;

}else{
   insurePrice = 2200;
}
cout << "Annual price: $ ";
cout << insurePrice;
    return 0;
}