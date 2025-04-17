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
        return; //step 1.a
    }

    int mid = (low + high ) / 2; //Step 2

    //Step 3
    
margesort(low, mid); //Step 3.a
margesort(mid + 1,high); //Step 3.b

//Step 4
int i, j;
i = low; //step 4.a
j = mid; //step 4.b

int k = low; //step 4.c

while(i <= mid && j <= high) { //Step 4.d
    if(arr[i] <= arr[j]) {   //Step 4.d.i
        B[k] = arr[i];
        i++;
    } else {
        B[k] = arr[j];
        j++;
    }
    k++; //step 4.d.ii
}

//step4.e
while(j <= high){
    B[k] = arr[j];
    j++;
    k++;
}

//step4.f
while (i<= mid){
    B[k] = arr[i];
    i++;
}

}

void output() {
    cout << "\nData Setelah diurutkan (Mergesort) : ";
    for (int i = 0; i < n; i++ ){
        cout << arr [i] << " ";
    }
    cout <<endl;
}

