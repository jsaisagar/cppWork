
@Author: Sai Sagar Jinka
#include <iostream>
using namespace std;
int binarySearch(int arr[], int first, int last, int x){
        if(last > 1)
        {
                int mid = first + (last - 1)/2;
                if(arr[mid] == x)
                        return mid;
                if(arr[mid] > x)
                        return binarySearch(arr, first, mid - 1, x);

                return binarySearch(arr, mid + 1, last, x);

                return -1;
        }
}

int main(){
        int array[] = {1,3,4,5,7,8,9,90};
        int n = sizeof(array)/sizeof(array[0]);
        int index = binarySearch(array,0,n-1,5);
//      cout << "The size of array is " << sizeof(array);
//      cout << "The size of one element is " << sizeof(array[0]);
        cout<<"The index of searched element is " << index << endl;
        return 0;
}
