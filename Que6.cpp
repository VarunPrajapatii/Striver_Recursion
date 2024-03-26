//Que6: Find the factorial of n.

#include <iostream>
using namespace std;

int fact(int);

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of number is: "<<fact(n);
}

int fact(int n) {
    if(n<=1) return n;
    int last = fact(n-1);
    int slast = fact(n-2);
    return last + slast;
}




// Iteration way to find fibonacci term..
// int main() {
//     int n = 40;
//     int last = 1;
//     int slast = 1;
//     for(int i=3; i<=n; i++){
//         int temp = last;
//         last = slast + last;
//         slast = temp;
//     }
//     cout<<last;
// }