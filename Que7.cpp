//Print all subsequence

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void printF(int ind, vector<int> &ds, int arr[], int n) {
//     if(ind == n) {
//         for(auto it: ds) {
//             cout << it << " ";
//         }
//         if(ds.size() == 0) {
//             cout<<"{}";
//         }
//         cout << endl;
//         return;
//     }
//     //tale or pick the particular index into the subsequence
//     ds.push_back(arr[ind]);
//     printF(ind+1, ds, arr, n);
//     ds.pop_back();
//     //not pick or not take condition, this element is not added to your subsequence
//     printF(ind+1, ds, arr, n);
// }

// int main() {
//     int arr[] = {3,1,2};
//     int n = 3;
//     vector<int> ds;
//     printF(0, ds, arr, n);

//     return 0;
// }



//Print Subsequence with sum as K.

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n) {
//     if(ind == n) {
//         if(s == sum) {
//             for(auto it: ds) cout<<it<<" ";
//             cout<<endl;
//         }
//         return;
//     }
//     ds.push_back(arr[ind]);
//     s += arr[ind];
//     printS(ind+1, ds, s, sum, arr, n);

//     s -= arr[ind];
//     ds.pop_back();

//     //not pick
//     printS(ind+1, ds, s, sum, arr, n);
// }

// int main() {
//     int arr[] = {1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int> ds;
//     printS(0, ds, 0, sum, arr, n);

//     return 0;
// }




//Print one subsequence with sum as sum.

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n) {
//     if(ind == n) {
//         if(s == sum) {
//             for(auto it: ds) cout<<it<<" ";
//             cout<<endl;
//             return true;
//         }
//         return;
//     }
//     ds.push_back(arr[ind]);
//     s += arr[ind];
//     if(printS(ind+1, ds, s, sum, arr, n) == true) {
//         return true;
//     }
//     s -= arr[ind];
//     ds.pop_back();

//     //not pick
//     if(printS(ind+1, ds, s, sum, arr, n) == true ) {
//         return true;
//     }
//     return false;
// }

// int main() {
//     int arr[] = {1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int> ds;
//     printS(0, ds, 0, sum, arr, n);

//     return 0;
// }




//Count number of subsequesces with sum = k.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int printS(int ind, int s, int sum, int arr[], int n) {
    if(ind == n) {
        if(s == sum) return 1;
        return 0;
    }
    s += arr[ind];
    int l = printS(ind+1, s, sum, arr, n);

    s -= arr[ind];

    //not pick
    int r = printS(ind+1, s, sum, arr, n);

    return l+r;
}

int main() {
    int arr[] = {1,2,1};
    int n=3;
    int sum=2;
    cout<< printS(0, 0, sum, arr, n);

    return 0;
}