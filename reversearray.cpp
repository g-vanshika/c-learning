#include <iostream>
using namespace std;
int main() {
    int arr[5] , revarr[5] ;
    int *ptrarr = arr;
    int *ptrrevarr = revarr;
    
     cout << " enter element " << endl ;
    for ( int i=0 ; i<5 ; i++ ){
        cin >> *(ptrarr + i);  

    }
    for ( int i=4, j=0 ; i>=0 && j<5 ; i-- , j++ ){
        *(ptrrevarr + j) = *(ptrarr + i);
    }
    cout << " reverse of the array is " << endl ;
    for ( int k=0 ; k<5 ; k++ ){
        cout << *(ptrrevarr + k) << " ";
    }
    return 0;
}