#include <stdio.h>
#include <stdlib.h>
int swap(int *a ,int *b);
int main(void)
{
int a,b;
    printf("enter a and b");
      scanf("%d %d",&a,&b);
   swap(&a,&b);

    printf("%d %d ",a,b);
    return 0;
}
int swap(int *a ,int *b)
{

    int temp=*a;
    *a=*b;
    *b=temp;
}
