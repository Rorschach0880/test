#ifndef STU_H_INCLUDED
#define STU_H_INCLUDED
#define LEN sizeof(struct student)


struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    double score[3];
    double avg;
    double sum;
    int ranking;
    struct student *next;
};
extern int n;
extern struct student *p;
extern struct student *h;
extern struct student *r;
//hello.c
void headhello();
void endhello();
void head();

//input.c
int inputhead();
void add();
int input(struct student *p);
int  preventduplicates(int no);


//output.c
void outputs();
void output(struct student *p);


//search.c
int seek();
void seekhead();


//modify.c
void fix();
void fixhead();


//delete.c
void delhead();
void del();

//sort.c
void numsort();
void sorthead();
void sort();
void sort3();
void sort2();
void sort1();
void avgsort();

//file.c
void fileinputs();
void filesave();
#endif // STU_H_INCLUDED
