#include <iostream>
using namespace std;

// Array of integers to hold values
int arr[20];
int cmp_count = 0; // number of comparisons
int mov_count; // number of data movements

void Input() {
    int n;
    while (true) {
        cout << "Masukkan panjang elemen array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20." << endl;
    }
    cout << "\n" << endl;
    cout << "\nMasukkan Elemen Array" << endl;
    cout << "......................" << endl;

    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
}

// Swaps the element at index x with the element at index y
void swap(int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

// Quick sort algorithm
void q_short(int low, int high) {
    if (low >= high)
        return;

    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (arr[i] <= pivot && i <= high) {
            i++;
            cmp_count++;
        }
        while (arr[j] > pivot && j >= low) {
            j--;
            cmp_count++;
        }
        if (i < j) {
            swap(i, j);
        }
    }
    swap(low, j);

    q_short(low, j - 1);
    q_short(j + 1, high);
}

void Display() {
    cout << "\n\n";
    cout << "Sorted Array:" << endl;
    cout << "------------" << endl;

    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\nNumber of comparisons: " << cmp_count << endl;
    cout << "Number of data movements: " << mov_count << endl;
}

int main() {
    char ch;
    do {
        Input();
        q_short(0, 19);
        Display();
        cout << "\n\nApakah Anda ingin melanjutkan? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    return 0;
}