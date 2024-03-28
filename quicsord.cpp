#include <iostream>
using namespace std;

// array of integers to hold values
int arr[20];
int cmp_count = 0;
int mov_cpunt = 0;
int n;

void input() {
    while (true) {
        cout << "masukan panjang elemen array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\n maksimum panjanga array adalah 20" << endl;
    }
}

int main () {

}