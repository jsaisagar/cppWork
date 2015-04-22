#include <iostream>

using namespace std;

#define MAX 100
#define SIZE 6

void sumPair(int arr[], int n)
{
        bool boolean[MAX] = {false};
        for(int i = 0; i <SIZE; i++)
                boolean[arr[i]] = true;
        for(int i =0; i<SIZE; i++)
        {
                int required = n - arr[i];
                if(required >= 0 && boolean[required-1] == true)
                        cout<<"The sum pair is " << required << "and" << arr[i] <<endl;
        }
}

int main()
{
        int arr[] = {1,4,24,56,7,10,8};
        int n = 18;
        sumPair(arr, 18);
        return 0;
}
