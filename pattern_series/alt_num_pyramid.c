#include <stdio.h>
int main(){
    int i,j,n,count=0,k=0;
    printf("Enter N");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        count=k;
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%d",count+i);
                count=count-1;
                if(j!=i)printf("*");
                k++;
            }else{
                count=count+1;
                printf("%d",count);
                if(j!=i)printf("*");
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
