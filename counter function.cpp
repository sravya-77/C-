#include <iostream>
using namespace std;

void counterFunction() {
    static int count = 0; 
    count++;
    cout << "Function called " << count << " times." << endl;
}

int main() {
    counterFunction();
    counterFunction(); 
    counterFunction(); 
}
