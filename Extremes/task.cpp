// The task is to calculate the extreme values in an array 

#include <iostream>
using namespace std;

void getExtremes(float& min,float& max, float a[], int n){
//Used & signs so that it changes the values of the global varibles when changes are applied in the function
    min = a[0]; // Allocates arays first number to the min
    max = a[0];// Allocates arays first number to the max
    
    for(int i=0;i < n ;i++){
        if(a[i]>max)
        max = a[i]; 
// If the currect number is greater than max then then change the value of max to be the current number
        if(a[i]<min)
        min = a[i];
// If the currect number is less than min then then change the value of min to be the current number
    }
}
int main(){
    float min , max , n;
    float number[] = {56,77,1,23,22};//declares an array
    n = sizeof(number)/sizeof(number[0]);
    getExtremes(min,max,number,n);

    cout << "The minimun in the array is: "<<min<<"\nThe maximum is: "<<max;
}
