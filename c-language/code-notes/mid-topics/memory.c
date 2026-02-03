#include<stdio.h>
int main(){
    float a=42; // a=1420, 42
    float* location=&a;

    printf("%p\n",location);
    return 0;

}
