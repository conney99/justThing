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
//#include "server.hpp"
//#include "client.hpp"
#define _CRT_SECURE_NO_WARNINGS

FILE *fp;

typedef struct node {
    char *user_name;
    int user_age;
    int user_studentCode;
    struct node *next;
} Node;

Node *N;
Node *start;

int push(char *a, int b, int c) {
    N -> user_name = a;
    N -> user_age = b;
    N -> user_studentCode = c;
    N -> next = (Node *)malloc(sizeof(Node));
    N = N->next;
    return 0;
}
 
int pop(Node *top,int aa) {
    for(int ii=0; ii<aa; ii++) {
        printf("%s ,%d ,%d\n",top->user_name, top->user_age, top->user_studentCode);
        top = top->next;
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    fp = fopen("./input.txt", "r");

    int i=4; // 나중에 변경, 테스트용 숫자
    int count=0;
    
    
    int age, studentCode;
    
    N = (Node *)malloc(sizeof(Node));
    start = N;

    while(1) {
        if(count==i) break;
        char *name=(char *)malloc(sizeof(char)*15);
        fscanf(fp,"%s %d %d",name,&age,&studentCode);
        push(name,age,studentCode);
        count++;
    }
    
    pop(start,i);
    
    
    return 0;
}
