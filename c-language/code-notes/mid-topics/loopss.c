#include<stdio.h>
int main(){
    char c='#';
    for(int i=1;i<10;i++){ //i: 1,2,3,4,5,6,7,8,9
        for(int j=0;j<i;j++){

            printf("%c",c);
        }
        printf("\n");
        
    }

    return 0;
}
    