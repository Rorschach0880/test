#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

int seek()
{
    if(n==0){
            printf("———————————————————————\n");
        printf("\n当前系统中无学生信息，请先输入学生信息\n\n");
        return ;
    }
    int m,i=-1,f=0;
    while(scanf("%d",&m)!=1){
            printf("您的输入不正确,请重新输入学号:");
            fflush(stdin);
            continue;
        }
    if(m==0){
        printf("\n");
        return i;
    }
    p=h->next;
    for(i=0;i<n;i++){
        if(p->num==m){
            f++;
            printf("该学生信息为:\n");
            printf("\n学号       姓名                性别 年龄 成绩1  成绩2  成绩3  平均分    总分   排名\n");
            output(p);
            printf("\n");
            break;
        }
        p=p->next;
    }
    printf("\n");
    if(f==0){
        i=-1;
        printf("———————————————————————\n\n");
        printf("系统中未找到该学生信息\n\n");
    }
    return i;
}

void seekhead()
{
    printf("———————————————————————\n\n");
    printf("欢迎来到学生信息查询界面，请输入要查找的学生学号(按0返回主界面):");
}

