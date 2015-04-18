
@author : Sagar

#include<iostream>
using namespace std;

int * bubbleSort(int arr[], int n)
{
        bool swapped = true;
        for(int i = 0; i < n; i++){
                if(arr[i] > arr[i+1])
                {
                        int temp = arr[i+1];
                        arr[i+1] = arr[i];
                        arr[i] = temp;
                }
                swapped = false;
        if(swapped == false)
                break;
        }
        return arr;
}

int main(){
        int arr[] = {64,67,23,56,98,12,42,9};
        int *p = bubbleSort(arr, 8);
        int size = sizeof(arr)/sizeof(arr[0]);
        for(int i = 0; i<size; i++)
        cout<<"The first element is " << p[i] << "\n";
     
