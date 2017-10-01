#include <stdio.h>
#include <stdlib.h>

int main()
{


    for(;;){
    int i=0,num,sum=1,j=1;
    printf("get n: ");
    scanf("%d",&num);
    printf("input: %d\n", num);


    for(i=1;i<=num;i++){
    sum =sum*i;
    }
    printf("sum :%d\n", sum);


    while(sum%10 == 0){
    sum = sum/10;
    j++;
    }
    printf("#%d aint a '0' \n\n",j);
    }
    return 0;
}
