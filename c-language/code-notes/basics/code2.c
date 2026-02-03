//  break, continue:
#include <stdio.h>
int main()
{   
    printf("continue: \n");
    for(int i=0;i<10;i++)
    {
        if(i%2==1)continue;
        printf("%d\n",i);
    }
    printf("break: \n");
     return 0;
}

