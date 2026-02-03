// function declaration:
// int function-name(parameter1-type, paramter2-type);
#include<stdio.h>
//  function declaration
// void print10(char [] ,char[]);
int multiplication(int, int, int, int , int);
// void motivation();
int main(){
int a,b,c,d,e;
a=2;
b=2;
c=2;
d=2;
e=2;
int answer=multiplication(a,b,c,d,e);
printf("%d\n",answer);
// function calling
// print10(name, name2);
return 0;
}
// function definition
int multiplication(int a, int b, int c, int d, int e){
    // defintion is written inside function..
    return a*b*c*d*e;

}

// void print10(char name[],char name2[]){
//    print("10");
// }

// void motivation(){


// }
