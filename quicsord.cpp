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

    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n i++) {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

// swap the element at index x with the element at index y
void swap(int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void q_sort(int low, int high) {
    int temp;
    int pivot, i, j;
    if (low > high) { //step 1
        return;
    }

    pivot = arr[low];
    i = low + 1;
    j = high;
}

while (i <= j) {
    while((arr[i] <= pivot) && (i <= high)) {
        i++;
        cmp_count++;
    }
    cmp_count++;
    if (i < j) {
        swap(i,j);
    }
    cmp_count++;
    if (i < j) {
        swap (i, j);
    }
}






int main () {

}