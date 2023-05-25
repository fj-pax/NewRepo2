#include <iostream>
#include <fstream>
using namespace std;
//Create the function to double the array size
int* doubleArray(int arr[], int size) {
    int* newArr = new int[size * 2];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    for (int i = size; i < size * 2; i++) {
        newArr[i] = 0;
    }
    return newArr;
}

int main() {
    int n;
    const int MAX = 50;
    cin >> n;
    //range input validation
).
The program '[2368] Project1.exe' has exited with code 0 (0x0).    if (n > 50 || n < 0) {
        return 0;
    }
    //input data into the array
    int arr[MAX];
    ifstream file("data");
    for (int i = 0; i < n; i++) {
        file >> arr[i];
    }
    file.close();

    //create the new array to read from
    int* newArr = doubleArray(arr, n);
    for (int i = 0; i < n * 2; i++) {
        cout << newArr[i] << endl;
    }
    delete[] newArr;
}