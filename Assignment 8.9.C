Q. Write a program to print cubes of the first N natural numbers





#include <stdio.h>
int main()
{ 
  int a=1,x;
  printf("Enter a number");
  scanf("%d",&x);
  while(a<=x) 
  {
  printf("%d\n",a*a*a);
  a++;
  
  }
    return 0;
}




RUN____


Enter a number10
1
8
27
64
125
216
343
512
729
1000

[Process completed - press Enter]