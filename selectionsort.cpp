#include <iostream>
#include <string>
using namespace std;

void selectionSort(int * A, int dim){
    int posmin = 0;
    int temp = 0;
    for(int i = 0; i < (dim-1); i++){
        posmin = i;
        for(int j = i+1; j < dim; j++){
            if(A[posmin] > A[j]){
                posmin = j;
            }
        }
        temp = A[i];
        A[i] = A[posmin];
        A[posmin] = temp;
    }
}

int main()
{
    int A[5] = {12, 1, 39, 14, 2};
    selectionSort(A, 5);
    for(int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
}
