#include<iostream>
using namespace std;

int main() {
    int i,j,k,n;

    cin >> n;

    for(i=n; i>=1; i--){ 
        for(k=n; k>i; k--){
            cout << "_ _";
        }
        for(j=i; j>=1; j--){
            cout << j << " ";
        }
        
        cout << endl;
    }

}