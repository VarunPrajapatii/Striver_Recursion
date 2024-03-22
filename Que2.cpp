//Que 2: Print numbers from n to 1. and 1 to n.

// #include <iostream>
// using namespace std;

// void f(int, int);

// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     f(n,n);
// }

// void f(int i, int n) {
//     if(i==0) {
//         return;
//     }
//     cout<<i<<" ";
//     f(i-1,n);
// }


// #include <iostream>
// using namespace std;

// void f(int, int);

// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     f(1,n);
// }

// void f(int i, int n) {
//     if(i==n+1) {
//         return;
//     }
//     cout<<i<<" ";
//     f(i+1,n);
// }




//Que: Print from 1 to n using backtracking.

#include <iostream>
using namespace std;

void f(int, int);

int main() {
    int n;
    cout<<"Enter a number";
    cin>>n;
    f(n,n);
}

void f(int i, int n) {
    if(i < 1) {
        return;
    }
    f(i-1, n);
    cout<<i<<" ";
}