
@Author : Sagar
#include <iostream>

using namespace std;
void swap(int *one, int *two){
	int t = *one;
	*one = *two;
	*two = t;
}

void quickSort(int arr[], int low, int high){
	int index = low+(high-1) / 2;
	/*while((arr[i] >= pivot) && (arr[j] <= pivot){
		swap(&arr[i], &arr[j]);
		i++;
		j++;
	} 
	while(arr[i] > pivot){
		int temp = pivot;
		int k = i;
		arr[index] = arr[i];
		while(k < index){
			arr[k] = arr[k+1];
			k++;
		}
		arr[index - 1] = temp;
	}
	while(arr[j] < pivot){
		int temp = pivot;
		int k = j;
		arr[index] = arr[j];
		while(k > index){
			 arr[k] = arr[k-1];
			 k--;
		}
		arr[index + 1] = temp;
	}*/

	if(low < high){
		pivot = low;
		i = low;
		j = high;
		
		while(i < j){
			while(arr[i] <= arr[pivot] && i < last)
			i++;
			while(arr[j] > arr[pivot])
			j--;
			swap(&arr[i], &arr[j]);
		}
			swap(&arr[pivot], &arr[j])
		
		quickSort(arr, low, j-1);
		quickSort(arr, j+1, high);
		
}	

int main(){
	int arr[] = {3,4,6,23,63,5,754,7};
	quickSort(arr, 0, 7);
	for(int i = 0; i < 8; i++)
		cout<<*(arr + i) <<endl;
return 0;
}
}		
