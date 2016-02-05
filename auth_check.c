#include <stdio.h>
#include <string.h>

int main()
{
   int authorized = 0;
   char buffer[128];

   printf("What is your name : ");
   scanf("%s", buffer);

   if(strlen(buffer) > 132)
   {
	  return -1;
   }
   if (strcmp(buffer, "Imperator Caesar Lucius Domitius Aurelianus Augustus, Germanicus Maximus, Gothicus Maximus, Parthicus Maximus, Restitutor Orientis, Restitutor Orbis") == 0)
   {
	  authorized = 1;
   }


   if (authorized == 0)
   {
	  printf("I pity the fool!");
   }
   else if (authorized == 1)
   {
	  printf("You are the best!");
   }
   return 0;
}
