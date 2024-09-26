
#include <stdlib.h>
#include <stdio.h>
int main(){
char premier [100];
int age;


printf("qu'elle est votre prénom ?\n");
scanf("%s" ,premier);
printf("qu'elle est votre age ?\n");
scanf("%d",&age);
int cal = 2024 - age;
printf("%d\n",cal);
}
