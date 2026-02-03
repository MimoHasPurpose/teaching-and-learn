#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));  
  int score=0;
  printf("\t\t\t\tlets play a gamee!!\n");
  while(true){
    printf("\t\t\t\tdo u still wanna play the game? guess the next number!\n");
    int num;
    scanf("%d",&num);
    int guess=rand()%3;
    if(num==guess){
        score=score+4;
        printf("\t\t\t\tu got a point! and your prediction and actual value are %d %d :: score is:: %d\n",num, guess,score);
    }else{
        score=score-2;
        printf("\t\t\t\twrong prediction\n");
    }
    if(score>10){
        system("clear"); 
        printf(" ************************** you won brooo!**************************\n");
        break;
    }
  }
  return 0;
}




