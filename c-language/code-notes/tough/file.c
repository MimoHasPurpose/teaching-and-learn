#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fptr;
    char name[10];
    char id[4];
    char age[4];
    fptr=fopen("sm.txt","w");
    int i=0;
    while(i<4)
    {
        printf("enter name, id, roolno: \n");
        scanf("%s",name);
        scanf("%s",id);
        scanf("%s",age);
        if(fptr!=NULL)
        {
            fputs("name: ",fptr);
            fputs(name,fptr);
            fputs("\n", fptr);
            fputs("id: ",fptr);
            fputs(id,fptr);
            fputs("\n", fptr);
            fputs("age: ",fptr);
            fputs(age,fptr);
            fputs("\n", fptr);
        }
        i++;
    }
    if(fptr==NULL)
    {
        printf("The file is not opened!\n");
    }
    fclose(fptr);
    return 0;
}