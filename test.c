#include <stdio.h>

void main(){
int a=10,b=20;
int* x=&a;
int* y=&b;
printf("the sum in %d\n",*x + *y);
}

int write(){
    // clock_t start, end;
    // double cpu_time_used;
    int  i;
    FILE * filePointer;

filePointer = fopen("output.txt", "w");
    for(i=1;i<=200000;i++){
        if(i%3 == 0 && i%5 == 0 ){
            fprintf(filePointer,"FizzBuzz\n");

        }
        else if(i%5 == 0){
            fprintf(filePointer,"Buzz\n");
        }
        else if(i%3 == 0){
            fprintf(filePointer,"Fizz\n");

        } else {
            fprintf(filePointer,"%i\n",i);
        }
    }
    return 0;
}
