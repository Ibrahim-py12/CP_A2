#include <iostream>
#include <algorithm> 

using namespace std;

// Function declarations
double getMean(int arr[], int n);
double getMedian(int arr[], int n);
int getMode(int arr[], int n);

int main() {
    int data[] = {4,6,7,3,8,64,5,5,5,7,76,6,8,8,95,4,3,25,4,64,6,63,3};
    int n = sizeof(data) / sizeof(data[0]);

    // Sorting for Median calculation
    sort(data, data + n);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) cout << data[i] << " ";
    
    cout << "\n\n=========Statistics ________________________________" << endl;
    cout << "Mean   : " << getMean(data, n) << endl;
    cout << "Median : " << getMedian(data, n) << endl;
    cout << "Mode   : " << getMode(data, n) << endl;

    return 0;
}

// 1. Mean: The average
double getMean(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum / n;
}

// 2. Median: The middle value
double getMedian(int arr[], int n) {
    if (n % 2 != 0) { // Odd number of elements
        return arr[n / 2];
    } else {          // Even number of elements then take (average of middle two)
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
}

// 3. Mode: The most frequent element
int getMode(int arr[], int n) {
    int mode = arr[0];
    int max_count = 1;
    int current_count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_count++;
        } else {
            current_count = 1;
        }

        if (current_count > max_count) {
            max_count = current_count;
            mode = arr[i - 1];
        }
    }
    return mode;
}