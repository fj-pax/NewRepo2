#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int* doubleArraySize(int*, int);

int main()
{
    const int MAX = 50;
    int arr[MAX];
    int N;

    ifstream infile("data.txt");
    cin >> N;
    if (N < 0 || N > 50) {
        return 0;
    }
    for (int count = 0; count < N; count++)
        infile >> arr[count];
        infile.close();

        int* array2 = doubleArraySize(arr, N * 2);
        for (int count = 0; count < 2 * N; count++) {
            cout << array2[count] << endl;
        }

        delete[] array2;
        return 0;

    



}


    
int* doubleArraySize(int* arr, int size)
{
    int* array2 = new int[2 * size];
    for (int count = 0; count < size; count++)
    {
     array2[count] = arr[count];
    }
    for (int count = size; count < 2 * size; count++)
    {
        array2[count] = 0;
    }
    return array2;
}

