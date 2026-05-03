#include <iostream>
#include <math.h>
using namespace std;

double stdev(double x[], int n){ // Function declaration
    int size = n;
    double summition = 0;
    double sum = 0;
for(int i=0;i<size;i++){
    sum+=x[i]; // Calucate sum of whole array
}
double avg = sum/size; // Calculate average
for(int i=0;i<size;i++){
    summition += pow(x[i]-avg,2); // Calucalating sum(Xi - Xavg)

}
double stdv = sqrt(summition/size); // Calculating Standard deviation

return stdv;

}

int main (){
    double x[] = {1,0,0,1};
    int size = sizeof(x)/sizeof(x[0]); /// Calculating Size of the array
    double stdv;
    stdv = stdev(x,size); // Calling funtion 
    cout << "The standard deveation of the Array is: " << stdv;
}