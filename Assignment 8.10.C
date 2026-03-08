Q. 10. Write a program to print a table of N.

#include <stdio.h>
int main()
{ 
  int a=1,x;
  printf("Enter a number");
  scanf("%d",&x);
  while(a<=10) 
  {
   printf("%d\n",a*x);
   a++;
  }
  
    return 0;
}



RUN______


Enter a number7
7
14
21
28
35
42
49
56
63
70

[Process completed - press Enter]