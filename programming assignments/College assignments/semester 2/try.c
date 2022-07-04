#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int num, b;
    scanf("%d%d", &num, &b);
  	for (int i = num; i<=b; i++) {
      printf(i==1?"one\n":i==2?"two\n":i==3?"three\n":i==4?"four\n":i==5?"five\n":i==6?"six\n":i==7?"seven\n":i==8?"eight\n":i==9?"nine\n":(i^1)?"even\n":"odd\n");
      }
    return 0;
}
