
@author : Jinka Sai Sagar
#include <iostream>

using namespace std;

int * selectionSort(int arr[]) {
        //int size = sizeof(arr)/sizeof(arr[0]);
        int main = 0;
        for(int i = 0; i < 8; i++)
        {
                int min = i;
                for(int j = min+1; j < 8; j++){
                        std::cout << j << endl;
                        if(arr[j] < arr[min])
                                min = j;
                }
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;

        //return arr;
        }
return arr;
}

int main(){
        int arr[] = {64,67,23,56,98,12,42,9};
        int *p = selectionSort(arr);
        return 0;
}
