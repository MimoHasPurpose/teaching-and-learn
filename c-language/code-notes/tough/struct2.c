#include<stdio.h>
#include<string.h>
// int size=10;
struct car{
    char color[10];
    char name[10];
    int speed;
    int seats;
};

// function-name(arguement1, arguement2, arguementn)
int main(){

    struct car mercedes;
    strcpy(mercedes.color,"Black");
    strcpy(mercedes.name, "classA");
    mercedes.speed=200;
    mercedes.seats=8;
    printf("%s\n",mercedes.color);
    printf("%s\n",mercedes.name);
    printf("%d\n",mercedes.speed);
    printf("%d\n",mercedes.seats);


}