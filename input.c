#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

int input(struct student *p)
{
    int i=0;
    p->sum=0;
    while(scanf("%d",&i)!=1){
            printf("\n�������ѧ�Ų���ȷ,����������\n\n");
            printf("����������������������������������������������\n\n");
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
    loop1:printf("\n����������������������������������������������\n\n");
    printf("��������Ҫ��ӵ�ѧ������(��0������������):");
    int a,i;
    while(scanf("%d",&a)!=1||a<0){
            printf("\n�������벻��ȷ,����������\n\n");
            printf("����������������������������������������������\n\n");
            printf("��������Ҫ��ӵ�ѧ������(��0������������):");
            fflush(stdin);
            continue;
        }
    c=s=0;
        printf("\n");
        if(a==0) return;
        printf("����������������������������������������������\n\n");
        printf("����������ѧ����(��0�������ϸ�����):\nѧ�� ���� �Ա� ���� �ɼ�1 �ɼ�2 �ɼ�3\n");
        for(i=0;i<a;i++){
            p=(struct student*)malloc(LEN);
            k=input(p);
            if(k==0) goto loop1;
            else if(preventduplicates(k)){
                s++;
                printf("\nѧ��%d %s����ʧ��(ѧ���ظ�)\n\n",k,p->name);
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
    printf("ѧ����Ϣ�ɹ�¼��%d�ˣ�¼��ʧ��%d�ˣ�\n\n",c,s);
    avgsort();
    return ;
}

int inputhead()
{
    printf("����������������������������������������������\n\n");
    printf("��ӭ����ѧ����Ϣ��ӽ��棬�밴���ּ�ѡ�����\n");
    printf("1�Ӽ�������ѧ����Ϣ\n");
    printf("2���ļ�������ѧ����Ϣ\n");
    printf("0��������һ���˵�\n\n");
    int i;
    printf("��ѡ�����:");
    while(scanf("%d",&i)!=1||i>2||i<0){
            printf("\n�������벻��ȷ,����������:");
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
