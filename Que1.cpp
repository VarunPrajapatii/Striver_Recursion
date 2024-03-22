//Que1: Print Name n times.

#include <iostream>
using namespace std;

void f(int, int);


int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    f(1,n);

}


void f(int i, int n) {
    if(i>n) {
        return;
    }
    cout<<"Var\n";
    f(i+1,n);
}