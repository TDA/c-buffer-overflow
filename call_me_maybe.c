#include <stdio.h>

int main()
{
   getinput();
   return 0;
}

int getinput()
{
   char buf[32];
   gets(buf);
   return 1;
}

void not_used()
{
   printf("The buffer was successfully overflowed!\n");
   exit(177);
}
