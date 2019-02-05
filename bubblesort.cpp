#include <iostream>
#include <string>
using namespace std;

void bubbleSort(int * A, int dim){
    int temp = 0;
    bool move = true;
    while(move != false){
        move = false;
        for(int i = 0; i < (dim-1); i++){
            if(A[i] > A[i+1]){
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                move = true;
            }
        }
    }
}

int main()
{
    int A[5] = {12, 1, 39, 14, 2};
    bubbleSort(A, 5);
    for(int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
}
