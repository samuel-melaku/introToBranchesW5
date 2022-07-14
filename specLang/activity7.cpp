#include <iostream>
#include <cmath>
using namespace std;

int main() {
int numStrokes;

cout << "Number of strokes: ";
cin >> numStrokes;

// Assumes "pat 4"
if (numStrokes <= 0){
   cout << "Invalid entry.";
}else if (numStrokes == 1) {
   cout << "Hole in 1!!!";
}else if (numStrokes == 2) {
   cout << "Eagel!";
}else if (numStrokes == 3) {
   cout << "Birdie";
}else if (numStrokes == 4) {
   cout << "Par";
}else{
   cout << "Better luck next time.";
}
    return 0;
}