#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

int input(struct student *p)
{
    int i=0;
    p->sum=0;
    while(scanf("%d",&i)!=1){
            printf("\n您输入的学号不正确,请重新输入\n\n");
            printf("———————————————————————\n\n");
            fflush(stdin);
            continue;
        }
    if(i==0) return i;
    else p->num=i;
    scanf("%s %c %d %lf %lf %lf",&p->name,&p->sex,&p->age,&p->score[0],&p->score[1],&p->score[2]);
    p->sum=p->score[0]+p->score[1]+p->score[2];
    p->avg=p->sum/3;
    return i;
}

void add()
{
    int k,c,s;
    k=inputhead();
    if(k==0){
        printf("\n");
        return;
    }
    if(k==2){
        fileinputs();
        return ;
    }
    loop1:printf("\n———————————————————————\n\n");
    printf("请输入需要添加的学生人数(按0返回至主界面):");
    int a,i;
    while(scanf("%d",&a)!=1||a<0){
            printf("\n您的输入不正确,请重新输入\n\n");
            printf("———————————————————————\n\n");
            printf("请输入需要添加的学生人数(按0返回至主界面):");
            fflush(stdin);
            continue;
        }
    c=s=0;
        printf("\n");
        if(a==0) return;
        printf("———————————————————————\n\n");
        printf("请依次输入学生的(按0返回至上个界面):\n学号 姓名 性别 年龄 成绩1 成绩2 成绩3\n");
        for(i=0;i<a;i++){
            p=(struct student*)malloc(LEN);
            k=input(p);
            if(k==0) goto loop1;
            else if(preventduplicates(k)){
                s++;
                printf("\n学生%d %s输入失败(学号重复)\n\n",k,p->name);
                free(p);
            }
            else{
                r->next=p;
                r=p;
                c++;
                n++;
            }
        }
        r->next=NULL;
    printf("\n");
    printf("学生信息成功录入%d人，录入失败%d人！\n\n",c,s);
    avgsort();
    return ;
}

int inputhead()
{
    printf("———————————————————————\n\n");
    printf("欢迎来到学生信息添加界面，请按数字键选择操作\n");
    printf("1从键盘输入学生信息\n");
    printf("2从文件中输入学生信息\n");
    printf("0返回至上一个菜单\n\n");
    int i;
    printf("您选择操作:");
    while(scanf("%d",&i)!=1||i>2||i<0){
            printf("\n您的输入不正确,请重新输入:");
            fflush(stdin);
            continue;
            //inputhead();
        }
    return i;
}

int  preventduplicates(int no)
{
    struct student *t;
    int i;
    t=h->next;
    for(i=0;i<n;i++){
        if(t->num==no)
            return 1;
    t=t->next;
    }
    return 0;
}
