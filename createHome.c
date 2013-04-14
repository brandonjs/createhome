#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
   char s[100];
   sprintf(s, "cp -r /etc/skel %s", argv[1]);
   system(s);
   sprintf(s, "chown -R %s:100 %s", argv[2], argv[1]);
   system(s);
   return 0;
}
