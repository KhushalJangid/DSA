#include <stdio.h>

struct element {
    char key[50];
    char value[100];
    struct element* link;
};

struct element* Map(){
    struct element* head = NULL;
    head = (struct element*)malloc(sizeof(struct element));
    return head;
}

int insert(struct element* map,char key[],char value[]){
    struct element* node = NULL;
    node = (struct element*)malloc(sizeof(struct element));
    while (map != NULL) {
        map = map->link;
    }
    node->key = key;
    node->value = value;
    map->link = node;
    return 0;
}