#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i=low+1,j=high;
    while(i<j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
            j--;
            i++;
        }
    }
    if(j<i)
        swap(&arr[j],&pivot);
    return j;
}

void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = partition(arr, low, high);
		cout<<pi<<endl;
		printArray(&arr[low], pi-1);
		printArray(&arr[pi+1], high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


// Driver Code
int main()
{
	int arr[] = { 10,342,300, 1,7, 8, 9, 5 ,11,20};
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
