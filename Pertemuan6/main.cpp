#include <iostream>

using namespace std;

int main() {
    // 1. Membuat sebuah array of int dengan 5 elemen
    int arr[5] = {1, 3, 5, 7, 9};

    // 2. Mencetak semua elemen array
    cout << "Elemen array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. Mencari apakah ada elemen yang merupakan kelipatan dari N
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;

    bool found = false;
    cout << "Kelipatan dari " << N << " di array: ";
    for(int i = 0; i < 5; i++) {
        if(arr[i] % N == 0) {
            cout << arr[i] << " "; // Mencetak elemen yang merupakan kelipatan dari N
            found = true;
        }
    }

    // Jika tidak ada elemen yang merupakan kelipatan N
    if(!found) {
        cout << "Tidak ada elemen yang merupakan kelipatan dari " << N;
    }

    cout << endl;

    return 0;
}
