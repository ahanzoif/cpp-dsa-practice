#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;
    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid + 1;
        }

        else{
            end = end - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}

int main() {
    int even[6] = {2, 4, 6, 8, 10, 26};
    int odd[5] = {3, 5, 9, 13, 21};

    int Evenindex = binarySearch(even, 6, 10);
    cout << "Index of 10 is " << Evenindex << endl;

    int Oddindex = binarySearch(odd, 5, 13);
    cout << "Index of 13 is " << Oddindex << endl;

    return 0;
}