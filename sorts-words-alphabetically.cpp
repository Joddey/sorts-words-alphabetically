#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    const int ARRAY_SIZE = 5;
    string myArray[ARRAY_SIZE];

    cout << "Enter 5 words:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "Word " << i + 1 << ": ";
        cin >> myArray[i];
    }

    sort(myArray, myArray + ARRAY_SIZE);

    cout << "Words sorted in alphabetical order:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << myArray[i] << endl;
    }

    return 0;
}
