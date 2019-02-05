#include <iostream>
#include <string>
using namespace std;

void merge(int * A, int low, int mid, int high){
    int temp[high + 1];
    int i = low;
    int j = (mid + 1);
    int k = 0;
    while((i <= mid) && (j <= high)){
        if(A[i] <= A[j]){
            temp[k++] = A[i++];
        }
        else if(A[j] <= A[i]){
            temp[k++] = A[j++];
        }
    }
    while(i <= mid){
        temp[k++] = A[i++];
    }
    while(j <= high){
        temp[k++] = A[j++];
    }
    k--;
    while(k >= 0){
        A[low + k] = temp[k];
        k--;
    }
}

void mergeSort(int * A, int low, int high){
    int mid = 0;
    if(low < high){
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, (mid + 1), high);
        merge(A, low, mid, high);
    }
}

int main()
{
    int A[5] = {12, 1, 39, 14, 2};
    mergeSort(A, 0, 4);
    for(int i = 0; i < dim; i++){
        cout << A[i] << " ";
    }
}
