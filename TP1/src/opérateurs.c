#include <stdio.h>
int main(){
int a,b,c,d,e,f;
a = 16;
b = 3;
c = a+b;
printf("L'addition de %d et %d = %d \n",a,b,c);
d = b-a;
printf("La soustraction de %d et %d est %d\n", b, a, d);
e= a*b;
printf("La multiplication de %d et %d est %d \n",a,b,e);
f= a%b;
printf("Le reste de la division de %d par %d est : %d \n",a,b,f);
}

