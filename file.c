#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

void fileinputs()
{
    int i=0;
    FILE *fp=fopen("stu.txt","rb");
    if(fp==NULL){
        printf("�ļ���ʧ�ܣ�\n");
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
    printf("\nѧ����Ϣ�ɹ����ļ�����%d�ˣ�\n\n",i);
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
        printf("ѧ����Ϣ����ɹ���\n\n");
    else
        printf("ѧ����Ϣ����ʧ�ܣ�\n\n");
}
