#include <unistd.h>
#include <stdlib.h>
int main(int argc,char **argv)
{
  char *name[4];
  name[0]="/bin/sh";
  name[1]="-c";
  name[2]="echo 111 > test.txt";
  name[3]=0;
  execve(name[0],name,0);
  return 0;
}
