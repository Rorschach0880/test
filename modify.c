#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stu.h"


void fixhead()
{
    printf("———————————————————————\n\n");
    printf("欢迎来到学生信息修改界面\n");
    printf("请输入要修改的学生学号(0返回至主界面):");
}


void fix()
{
    if(n==0){
        printf("———————————————————————\n\n");
        printf("当前系统中无学生信息，请先输入学生信息\n\n");
        return ;
    }
    loop1:fixhead();
    int i,m;
    m=seek();
    if(m==-1){
        //printf("\n");
        return ;
    }
    loop2:printf("———————————————————————\n\n");
    printf("请按数字键选择操作\n");
    printf("1修改该学生单个信息\n");
    printf("0返回至上个界面\n");
    printf("\n您选择操作:");
    loop:while(scanf("%d",&i)!=1||i>1||i<0){
            printf("\n您的输入不正确,请重新输入选项:");
            fflush(stdin);
            continue;
        }
        printf("\n");
    if(i==0) goto loop1;
    /*else if(i==1){
        printf("\n———————————————————————\n\n");
        printf("请依次输入学生的信息(0返回至上个界面):\n学号 姓名 性别 年龄 成绩1 成绩2 成绩3\n");
        if(input(p)==0){
            printf("\n");
            goto loop2;
        }
        printf("\n");
    }*/
    else if(i==1){
    printf("———————————————————————\n\n");
    printf("请按数字键选择要修改的信息\n");
    printf("1学号\n");
    printf("2姓名\n");
    printf("3性别\n");
    printf("4年龄\n5成绩1\n6成绩2\n7成绩3\n0返回至上个界面\n");
    printf("您选择操作:");
    while(scanf("%d",&i)!=1||i>7||i<0){
            printf("您的输入不正确,请重新输入选项:");
            fflush(stdin);
            continue;
        }
        printf("\n");
        printf("———————————————————————\n\n");
    switch(i)
    {
        case 0:goto loop2;
                break;
        case 1:printf("你选择将该学生的学号修改为:");
                scanf("%d",&p->num);
                break;
        case 2:printf("你选择将该学生的姓名修改为:");
                scanf("%s",&p->name);
                break;
        case 3:printf("你选择将该学生的性别修改为:");
                scanf(" %c",&p->sex);
                break;
        case 4:printf("你选择将该学生的年龄修改为:");
                scanf("%d",&p->age);
                break;
        case 5:printf("你选择将该学生的成绩1修改为:");
                scanf("%lf",&p->score[0]);
                break;
        case 6:printf("你选择将该学生的成绩2修改为:");
                scanf("%lf",&p->score[1]);
                break;
        case 7:printf("你选择将该学生的成绩2修改为:");
                scanf("%lf",&p->score[2]);
                break;
        }
    p->sum=0;
    p->sum=p->score[0]+p->score[1]+p->score[2];
    p->avg=p->sum/3;
    }
    else{
        printf("输入有误,请重新输入选项:");
        goto loop;
    }
    avgsort();
    printf("修改成功！\n\n");
    goto loop1;
}
