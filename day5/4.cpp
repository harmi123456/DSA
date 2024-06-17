#include<iostream>
using namespace std;

int main() {
    int n,i,j,k;

    for(i=1; i<=n; i++){
        for(k=n;k>i;k++){
            cout << "_";
        }
        for(j=1; j<i;j++){
            cout << j;
        }
        cout << endl;
    }
}