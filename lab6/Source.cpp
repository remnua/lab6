#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x, n;
    int i = 1;
    int j = 0;
    int mult = 1;
    cout << "Enter the number: ";
    cin >> x;
    do {
        n = (x % (int)pow(10, i)) / pow(10, j);
        if (n == 9) {
            mult *= n;
        }
        i++;
        j++;
    } while (pow(10, j) < x);
    cout << mult;


    return 0;
}