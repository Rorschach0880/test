#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

void sorthead()
{
    printf("\n———————————————————————\n\n");
    printf("欢迎来到学生信息排序界面！\n");
    printf("请选择排序条件\n");
    printf("1学号(升序)\n");
    printf("2平均分(降序)\n");
    printf("3成绩1(降序)\n");
    printf("4成绩2(降序)\n");
    printf("5成绩3(降序)\n");
    printf("0返回至主界面\n");
    printf("\n您选择操作:");
}

void sort()
{
    if(n==0){
        printf("———————————————————————\n");
        printf("\n当前系统中无学生信息，请先输入学生信息\n\n");
        return ;
    }
    sorthead();
    int m;
    loop1:while(scanf("%d",&m)!=1){
            printf("\n您的输入不正确,请重新输入操作:");
            fflush(stdin);
            continue;
        }
    if(m>5||m<0){
        printf("\n输入有误，请重新输入操作:");
        fflush(stdin);
        goto loop1;
    }
    switch(m)
    {
        case 0:return;
                break;
        case 1:numsort();
                break;
        case 2:avgsort();
                break;
        case 3:sort1();
                break;
        case 4:sort2();
                break;
        case 5:sort3();
                break;
    }
    printf("\n排序成功！\n\n");
    return ;
}

void numsort()
{
    avgsort();
    struct student *t;
    t=(struct student*)malloc(LEN);
    int i,j;
    for(i=0;i<n;i++){
        p=h;
        for(j=0;j<n-1;j++){
            if(p->next->num>p->next->next->num){
                t=p->next->next;
                p->next->next=t->next;
                t->next=p->next;
                p->next=t;
                if(p->next==r) r=p->next->next;
            }
            p=p->next;
        }
    }
}

void avgsort()
{
    struct student *t,*s=h;
    int i,j;
    while(s->next!=NULL){
        p=h;
        while(p->next->next!=NULL){
            if(p->next->avg<p->next->next->avg){
                t=p->next->next;
                p->next->next=t->next;
                t->next=p->next;
                p->next=t;
                if(p->next==r) r=p->next->next;
            }
            p=p->next;
        }
        s=s->next;
    }
    p=h->next;
    for(i=0;i<n;i++){
        p->ranking=i+1;
        p=p->next;
    }
}

void sort1()
{
    avgsort();
    struct student *t;
    int i,j;
    for(i=0;i<n;i++){
        p=h;
        for(j=0;j<n-1;j++){
            if(p->next->score[0]<p->next->next->score[0]){
                t=p->next->next;
                p->next->next=t->next;
                t->next=p->next;
                p->next=t;
                if(p->next==r) r=p->next->next;
            }
            p=p->next;
        }
    }
}

void sort2()
{
    avgsort();
    struct student *t;
    int i,j;
    for(i=0;i<n;i++){
        p=h;
        for(j=0;j<n-1;j++){
            if(p->next->score[1]<p->next->next->score[1]){
                t=p->next->next;
                p->next->next=t->next;
                t->next=p->next;
                p->next=t;
                if(p->next==r) r=p->next->next;
            }
            p=p->next;
        }
    }
}

void sort3()
{
    avgsort();
    struct student *t;
    int i,j;
    for(i=0;i<n;i++){
        p=h;
        for(j=0;j<n-1;j++){
            if(p->next->score[2]<p->next->next->score[2]){
                t=p->next->next;
                p->next->next=t->next;
                t->next=p->next;
                p->next=t;
                if(p->next==r) r=p->next->next;
            }
            p=p->next;
        }
    }
}
