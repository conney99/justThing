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
Node *top;
Node *start;
/*
int push(char *a, int b, int c) {
    N -> user_name = a;
    N -> user_age = b;
    N -> user_studentCode = c;
    N -> next = (Node *)malloc(sizeof(Node));
    N = N->next;
    return 0;
}
 int argc, const char * argv[]
*/
int main() {
    fp = fopen("input.txt", "r");

    int i=4; // 나중에 변경, 테스트용 숫자
    int count=0;
    
    char name[16]={0};
    int age, studentCode;
    
//    N = (Node *)malloc(sizeof(Node));
//    start = N;
    fscanf(fp," %d %d",&age,&studentCode);
    printf(" , %d , %d",age,studentCode);

    while(1) {
        //name = malloc(sizeof(char)*12);
        
        if(count==i) break;
        count++;
    }
    free(name);
    
    return 0;
}
