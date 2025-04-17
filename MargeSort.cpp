#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input(){
    while (true){
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n<= 20){
            break;
        }
        else {
            cout << "\nMaksimal Panjang Array adalah 20";
        }
    }

    cout << "\n============================";
    cout << "\nInputkan isi element Array";
    cout << "\n============================" << endl;

    for (int i = 0; i < n; i++ ) {
        cout << "Array Index ke - " << i << " : ";
        cin >> arr[i];
    }

}

//Membuat Fungsi MargeSort
void margesort (int low, int high){
    //step 1
    if (low >= high ){
        return; //steph 1.a
    }

    int mid = (low + high ) / 2; //Steph 2
    

}

void output() {
    cout << "\nData Setelah diurutkan (Mergesort) : ";
    for (int i = 0; i < n; i++ ){
        cout << arr [i] << " ";
    }
    cout <<endl;
}

