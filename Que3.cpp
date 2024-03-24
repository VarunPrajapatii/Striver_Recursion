//Que: Sum of first N numbers. (Parameterized way) 

// #include <iostream>
// using namespace std;

// void f(int, int);

// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     f(n,0);
// }

// void f(int i, int sum) {
//     if(i<1) {
//         cout<<"Sum: "<<sum;
//         return;
//     }
//     f(i-1, sum+i);
// }




//Que: Sum of first N numbers. (Functional way)

// #include <iostream>
// using namespace std;

// int f(int);

// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Sum: "<<f(n);
// }

// int f(int n) {
//     if(n==0) return 0;
//     return n+f(n-1);
// }




//Que: Factorial of n. (Functional approach)

// #include <iostream>
// using namespace std;

// int fact(int);

// int main()  {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Factorial is: "<<fact(n);
// }

// int fact(int n) {
//     if(n==1) return 1;
//     return n * fact(n-1);
// }



//Que: Factorial of n. (Parameterized approach)

#include <iostream>
using namespace std;

void fact(int, int);

int main () {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fact(1, n);
}

void fact(int ans, int n) {
    if(n==1) {
        cout<<"Factorial is: "<<ans;
        return;
    }
    fact(ans*n, n-1);
}