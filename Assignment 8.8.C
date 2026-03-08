Q. Write a program to print squares of the first N natural numbers




#include <stdio.h>
int main()
{ 
  int a=1,x;
  printf("Enter a number");
  scanf("%d",&x);
  while(a<=x) 
  {
  printf("%d\n",a*a);
  a++;
  
  }
    return 0;
}



RUN____



Enter a number10
1
4
9
16
25
36
49
64
81
100

[Process completed - press Enter]