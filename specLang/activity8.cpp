#include <iostream>
#include <cmath>
using namespace std;

int main() {
int Age ;

cout << "Your age: ";
cin >> Age;

if (Age < 6) {
   cout << "No teams";
}else if (Age < 8) {
   cout << "Play on U8 team";
} else if (Age < 10) {
   cout << "Play on U10 team";
}else if (Age < 12) {
   cout << "Play on U12 team";
}else{
   cout << "No teams";
}
    return 0;
}