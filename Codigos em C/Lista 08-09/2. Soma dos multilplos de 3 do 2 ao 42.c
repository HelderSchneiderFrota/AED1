#include <stdio.h>

int main()
{
   int i,a=0;
for (i=2;i<=42; i++){
    if(i % 3 == 0){
        a += i;
    }
}
printf("%d \n",a);
    return 0;
}
