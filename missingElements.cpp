// Given an array (not sorted). Find the range of missing elements in the ramge 0 to 99

#include<iostream>

using namespace std;

void MissingElements(int arr[], int n);

int main(){
        int arr[] = {103, 56,89,1,5,7,70,45,67};
        MissingElements(arr,8);
        return 0;
}

void MissingElements(int arr[], int n){
        bool array[100] = {false};
        for(int i = 0; i < n; i++)
                if(arr[i] < 100)
                        array[arr[i]] = true;
        int i = 0;
        while(i < 100)
        {
                if(array[i] == true)
                        cout<<"Print the number " << i <<endl;
                i++;
        }
}
