#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1; // Start at 1

    cout << "Enter a number: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a number greater than 0." << endl;
    } else {
        do {
            cout << i++ << " ";
           // i++; // Increment i so the loop eventually ends
        } while (i <= n); // Check condition at the end
    }

    return 0;
}
