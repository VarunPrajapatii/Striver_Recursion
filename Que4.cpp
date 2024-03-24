//Que: Reverse an array.

// #include <iostream>
// using namespace std;

// void rev(int, int);

// int arr[5] = {1,3,2,5,4};

// int main() {
//     rev(0,5-1);
//     for(int i=0; i<5; i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// void swap(int i, int j) {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// void rev(int i, int j) {
//     if(i>=j) return;
//     swap(i,j);
//     rev(i+1, j-1);
// }




//using a single variable

#include <iostream>
using namespace std;

void rev(int);

int arr[5] = {1,3,2,5,4};
int n=5;

int main() {
    rev(0);
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
}

void swap(int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void rev(int i) {
    if(i>=n/2) return;
    swap(i,n-i-1);
    rev(i+1);
}