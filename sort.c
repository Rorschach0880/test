#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

void sorthead()
{
    printf("\n����������������������������������������������\n\n");
    printf("��ӭ����ѧ����Ϣ������棡\n");
    printf("��ѡ����������\n");
    printf("1ѧ��(����)\n");
    printf("2ƽ����(����)\n");
    printf("3�ɼ�1(����)\n");
    printf("4�ɼ�2(����)\n");
    printf("5�ɼ�3(����)\n");
    printf("0������������\n");
    printf("\n��ѡ�����:");
}

void sort()
{
    if(n==0){
        printf("����������������������������������������������\n");
        printf("\n��ǰϵͳ����ѧ����Ϣ����������ѧ����Ϣ\n\n");
        return ;
    }
    sorthead();
    int m;
    loop1:while(scanf("%d",&m)!=1){
            printf("\n�������벻��ȷ,�������������:");
            fflush(stdin);
            continue;
        }
    if(m>5||m<0){
        printf("\n���������������������:");
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
    printf("\n����ɹ���\n\n");
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
