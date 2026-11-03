#include <iostream>
using namespace std;

void oddsum(int low, int high) {
    int sum = 0;
    int i = high;

    while (i >= low) {
        if (i % 2 != 0)
            sum += i;
        i--;
    }

    cout << "Sum of odd numbers = " << sum<<"\n";
}

void evensum(int low, int high) {
    int sum = 0;
    int i = high;

    while (i >= low) {
        if (i % 2 == 0)
            sum += i;
        i--;
    }

    cout << "Sum of even numbers = " << sum << "\n";
}

int main() {
    cout << "Enter range of numbers: ";
    int low, high;
    cin >> low >> high;

    evensum(low, high);
    oddsum(low, high);

    return 0;
}
