#include <stdio.h>
#include <string.h>

void iter(char* str, int i){
    int k;
    for(k=0;k<i;k++){
        printf("%s",str);
    }
    printf("\n");
    return;
}
