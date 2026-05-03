#include <iostream>
using namespace std;

void GetValue(int matrix[3][3], string name) {
    // Gets values of the matrices from the user
    for (int row = 0 ; row < 3; row++){
        for(int col = 0 ; col < 3 ; col++){
            cout << "Enter value for " << name << " [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];}}}
void ComputeAxB(int a[3][3],int b[3][3],int c[3][3]){
    // Multiplies the 2 matrices
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                c[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    c[i][j] += a[i][k]*b[k][j];}}}}
void PrintArray(int c[3][3]){
    // Prints any matrix
    for (int row = 0 ; row <3;row++){
        for(int col = 0 ; col < 3 ; col++){
            cout << c[row][col] << "\t";}
    cout << endl;}}

int main(){
    int a[3][3] = {};
    int b[3][3] = {};
    int c[3][3] = {};
    // 3 Arrays are initailized
    
    GetValue(a, "Matrix A");
    GetValue(b, "Matrix B");
    // Inputs are takes for 2 of them
    
    ComputeAxB(a,b,c);
    // Multiplication of 2 are done 
    
    cout << "Printing the Computed array: \n";
    PrintArray(c);
    return 0;
}
