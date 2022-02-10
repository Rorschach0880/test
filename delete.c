#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

void delhead()
{
    printf("———————————————————————\n\n");
    printf("欢迎来到学生信息删除界面\n");
    printf("请输入学号删除该学生(0返回至主界面):");
}

void del()
{
    if(n==0){
        printf("———————————————————————\n");
        printf("\n当前系统中无学生信息，请先输入学生信息\n\n");
        return ;
    }
    loop:delhead();
    int no;
    while(scanf("%d",&no)!=1){
            printf("\n您的输入不正确,请重新输入学号:");
            fflush(stdin);
            continue;
        }
    if(no==0){
        printf("\n");
        return ;
    }
    int i;
    p=h;
    for(i=0;i<n;i++){
        if(p->next->num==no)
            break;
        p=p->next;
    }
    if(i==n){
        printf("\n该学生不在系统中！！\n\n");
        goto loop;
    }
    struct student *t;
    t=p->next;
    p->next=p->next->next;
    if(t==r) r=p;
    free(t);
    printf("\n删除成功！\n\n");
    n=n-1;
    goto loop;
    avgsort();
}
