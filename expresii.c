#include <stdio.h>
#include <conio.h>
void main(void) {
    int a,b,i=3;
    a=++i; //preincrementare a lui i
    printf("a=%d\n",a);
    b=a--; //postdecrementare
    printf("a=%d b=%d\n",a,b);
    a+=++b; //atribuire compusa
    printf("a=%d b=%d\n",a,b);
    getchar();
}
