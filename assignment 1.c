#include <stdio.h>


int main(void)
{
   int a, b, c, d;
   printf("ENTER THE FITST VALUE :");
   scanf("%d" , &a);
   printf("ENTER THE SECOND VALUE :");
   scanf("%d" , &b);
   printf("ENTER THE third VALUE :");
   scanf("%d" , &c);
   d = a + b + c;
   printf("%d + %d + %d = %d\n" , a, b, c, d);
    return 0;
}
