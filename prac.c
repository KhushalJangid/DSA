#include <stdio.h>

void swap(int* a,int* b){
    int t = *a;
	*a = *b;
	*b = t;
}

int partition(int l,int h,int arr[]){
    int pi = arr[l];
    int i,j;
    i = l;
    j = h;
    while(i<j){
        while(arr[i]<=pi){ i++;}
        while(arr[j]>pi){j--;}
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    printf("%d %d\n",arr[l],arr[j]);
    swap(&arr[l],&arr[j]);
    return j;
}

void quicksort(int l,int h,int arr[]){
    if (l<h){
        int pi = partition(l,h,arr);
        quicksort(l,pi-1,arr);
        quicksort(pi+1,h,arr);
    }
    return;
}


void main(){
    int arr[100] = {58,45,84,8,5448,4};
    quicksort(0,5,arr);
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
}