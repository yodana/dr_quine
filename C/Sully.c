#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define I "5"
#define FILE "Sully_5.c"
#define GCC  "gcc -o Sully_5 Sully_5.c && ./Sully_5 && rm ./Sully_5"

int main()
{int i=atoi(I)-1;char *c="#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c%c#define I %c%d%c%c#define FILE %cSully_%d.c%c%c#define GCC  %cgcc -o Sully_%d Sully_%d.c && ./Sully_%d && rm ./Sully_%d%c%c%cint main()%c{int i=atoi(I)-1;char *c=%c%s%c;int fd=open(FILE, O_CREAT | O_RDWR, 0777);if(fd){dprintf(fd,c,10,10,10,10,34,i,34,10,34,i,34,10,34,i,i,i,i,34,10,10,10,34,c,34);if(i<0)return(0);system(GCC);}}";int fd=open(FILE, O_CREAT | O_RDWR, 0777);if(fd){dprintf(fd,c,10,10,10,10,34,i,34,10,34,i,34,10,34,i,i,i,i,34,10,10,10,34,c,34);if(i<0)return(0);system(GCC);}}