#include<stdlib.h>
#include<stdio.h>

void User_Details(int a[],int contact,int address,int balance)
{
    printf("Good");
    FILE * filepointer;
    filepointer=fopen("Bnk.txt",'w');
    fprintf(filepointer,"%s" "%s","I am ","Anshu");
}
int main()
{
    int a[200],c,ad,b;
    User_Details(a,c,ad,b);
}