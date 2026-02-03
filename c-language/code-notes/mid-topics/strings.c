// task:
// 1. access values in strings
// 2. modify values in strings
// 3. loop through a string
// notes:
//  char value : 'a' ;
//  string values: "abac";

#include<stdio.h>
int main(){
   
    char name[]="111111";
    printf("%s\n",name);
    // to access a value we use %c and use array indexing to get the specific value.
    printf("%c\n",name[2]);
    //  modifying string values
    name[2]='N';
    printf("%c\n",name[2]);
    //  loop through a string
    for(int i=0;i<=5;i++){
        printf("%c\n",name[i]);

    }

    return 0;
}