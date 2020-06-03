#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main ()

{
   char buff[1024];

   memset( buff, '\0', sizeof( buff ));
   setvbuf(stdout, buff, _IOFBF, 1024);

   fprintf(stdout, "Going to set full buffering on\n");
   fprintf(stdout, "This is tutorialspoint.com\n");

   fprintf(stdout, "This output will go into buff\n");
   //sleep(3);
   fflush(stdout);


   fprintf(stdout, "and this will appear when programm\n");
   fprintf(stdout, "will come after sleeping 3 seconds\n");


   sleep(3);
   //fflush(stdout);
   return(0);
}
