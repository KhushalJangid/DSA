#include <stdio.h>
#include <string.h>

void main(){
    char kw[10];
    char arr[32][10] = {
        "if",
        "else",
        "switch",
        "case",
        "for",
        "while",
        "int",
        "float",
        "double",
        "char",
        "enum",
        "long",
        "signed",
        "unsigned",
        "do",
        "continue",
        "break",
        "struct",
        "union",
        "goto",
        "return"
        };
    int flag = 0,i;
    printf("Enter the keyword: ");
    //gets(kw);
    scanf("%s",&kw);
    printf("%d\n",kw);
    for(i=0;i<21;i++){
        if(strcmp(arr[i],kw) == 0){
            flag=1;
            break;
        }
    }
    if(flag == 1){
        printf("Keyword %s found at index %d\n",kw,i);
    }else{
        printf("Keyword %s not found\n",kw);
    }
}