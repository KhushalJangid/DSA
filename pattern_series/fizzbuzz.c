#include <time.h>
#include<stdio.h>
int main(){
     clock_t start, end;
     double cpu_time_used;
         int i=1,f=1,b=1,n = 200000;

     start = clock();
     while(i<=n){
        if (f == 3 && b == 5){
            printf("FizzBuzz\n");
            f= 0;b=0;
        }else if(f == 3 || b == 5){
        if(f==3){
            printf("Fizz\n");
            f=0;
        } else if(b==5){
            printf("Buzz\n");
            b=0;
            }
        } else{
            printf("%d\n",i);
        }
        i++;
        f++;
        b++;
     }
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     if(i%3 == 0 && i%5 == 0 ){
    //         printf("FizzBuzz\n");

    //     }
    //     else if(i%5 == 0){
    //         printf("Buzz\n");
    //     }
    //     else if(i%3 == 0){
    //         printf("Fizz\n");

    //     } else {
    //         printf("%d\n",i);
    //     }
    // }
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf("%f\n\n",cpu_time_used);
    return 0;
}