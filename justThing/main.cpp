//
//  main.cpp
//  justThing
//
//  main controller
//
//  Created by 정지원 on 2022/03/17.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "server.hpp"
#include "client.hpp"
#define _CRT_SECURE_NO_WARNINGS

FILE *fp;

typedef struct node {
    char *user_name;
    int user_age;
    int user_studentCode;
    struct node *next;
} Node;

Node *N;
Node *top;
Node *start;

int push(char *a, int b, int c) {
    N -> user_name = malloc(sizeof(char)*12);
    N -> user_name = a;
    N -> user_age = b;
    N -> user_studentCode = c;
    N -> next = (Node *)malloc(sizeof(Node));
    N = N->next;
    
    
}

int main(int argc, const char * argv[]) {
    fp = fopen("input.txt","r");
    
    int i=4; // 나중에 변경
    int count=0;
    char *name = malloc(sizeof(char)*12);
    int age, studentCode;
    
    N = (Node *)malloc(sizeof(Node));
    start = N;
    while(1) {
        fscanf(fp,"%s,%d,%d",name,age,studentCode);
        if(count==i) break;
        count++;
    }
    
    return 0;
}
