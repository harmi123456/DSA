#include<iostream>
using namespace std;

int main () {
    int n,i,j;

    cout << "Enter any number : ";
    cin >> n;

    for(i=n; i>=1; i--){
        for(j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}