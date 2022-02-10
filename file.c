#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

void fileinputs()
{
    int i=0;
    FILE *fp=fopen("stu.txt","rb");
    if(fp==NULL){
        printf("文件打开失败！\n");
        return ;
    }
    p=(struct student*)malloc(LEN);
    fread(p,sizeof(struct student),1,fp);
    while(feof(fp)==0){
        n++;
        i++;
        r->next=p;
        r=p;
        p=(struct student*)malloc(LEN);
        fread(p,sizeof(struct student),1,fp);
    }
    avgsort();
    printf("\n学生信息成功从文件输入%d人！\n\n",i);
}

void filesave()
{
    avgsort();
    FILE *fp=fopen("stu.txt","wb");
    p=h->next;
    while(p){
        fwrite(p,sizeof(struct student),1,fp);
        p=p->next;
    }
    if(fclose(fp)==0)
        printf("学生信息保存成功！\n\n");
    else
        printf("学生信息保存失败！\n\n");
}
