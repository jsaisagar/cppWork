@author : Jinka Sai Sagar

#include <iostream>

using namespace std;

void merge(int arr[], int first, int middle, int last){
        //Storing left and right parts in temporaty arrays
        int left = middle - first;
        int right = last - (middle + 1);
        int leftArr[left], rightArr[right];
        int mainArrayIndex;
        for(int i = 0; i < left ; i++)
                leftArr[i] = arr[i];
        for(int i = 0; i < right; i++)
                rightArr[i] = arr[i];

        int i=0, j=0, k=first;
        while(i <= middle && j <= last)
                arr[k++] = (leftArr[i] < rightArr[j]) ? leftArr[i++] : rightArr[j++];
}

void mergeSort(int arr[], int first, int last){
        int middle = (first + (last-1))/2;
        mergeSort(arr,first, middle);
        mergeSort(arr, middle+1, last);
        merge(arr, first, middle, last);
}

int main(){
        int arr[] = {64,67,23,56,98,12,42,9};
        mergeSort(arr, 0, 7);
        for(int i = 0; i < 8; i++)
                cout<< "*(arr+i)" <<endl;
}
