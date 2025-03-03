#include <iostream>
using namespace std;
int main() {
    //Ek program likho jo user se n elements le aur unka sum return kare.
    int n , i=0 , sum =0 ;
    //ask user number of elements they want to enter 
    cout<< " enter number of elements you want to enter " <<endl ;
    cin>> n;
    int *arr = new int [n] ;
    cout<< " enter elements " <<endl ;
    //takes elements from user and adds them 
    while ( i<n ){
        cin >> arr[i];
        sum += arr[i] ;
        i++ ;
    }
   //give sum of array as output 
    cout<< " sum of the array is "<< sum << endl;
    delete[] arr ;
    return 0 ;
}