
#include <stdio.h>

int n1,n2;

int main()
{
    printf("Digite dois números inteiros.\n");
    scanf("%d%d",&n1,&n2);
    
    if (n1>n2){
        printf("%d é maior que %d.\n",n1,n2);
    }
    else{
        printf("%d é maior que %d.\n",n2,n1);
    }

    return 0;
}