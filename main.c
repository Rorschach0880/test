#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

int main()
{
    h=(struct student*)malloc(LEN);
    h->next=NULL;
    r=h;
    headhello();
    int i;
    while(1){
        head();
        while(scanf("%d",&i)!=1||i>8||i<0){
            printf("\n�����䲻��ȷ,�������������:");
            fflush(stdin);
            continue;
        }
        printf("\n");
        if(i==0){
            filesave();
            break;
        }
        switch(i){

            case 1:add();           //����
                break;
            case 2:fix();           //�޸�
                break;
            case 3:outputs();       //��ʾ
                break;
            case 4:
                   seekhead();
                   seek();          //��ѯ
                break;
            case 5:del();           //ɾ��
                break;
            case 6:sort();          //����
                break;
            case 7:system("cls");
                break;
            case 8:filesave();
                break;
        }
    }


    endhello();
    return 0;
}
