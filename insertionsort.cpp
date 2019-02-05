#include <iostream>
#include <string>
using namespace std;

void insertionSort(int * A, int dim){
    int value = 0;
    int j = 0;
    for(int i = 1; i < dim; i++){
        j = i-1;
        value = A[i];
        while((j >= 0) && (A[j] > value)){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = value;
    }
}

int main()
{
    int A[5] = {12, 1, 39, 14, 2};
    insertionSort(A, 5);
    for(int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
}
