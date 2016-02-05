#include <string.h>
#include <stdio.h>
void mycpy(char* str)
{   
  char foo[4];   
  strcpy(foo, str);
}
int main()
{   
  mycpy("asu cse 340 fall 2015 rocks!");   
  printf("After");   
  return 0;
}
