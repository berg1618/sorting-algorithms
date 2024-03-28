#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    // Seed the random number generator
    srand(time(nullptr));

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100; 
    }

    cout << "Unordered array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
