#include <stdio.h>
#include <fcntl.h>

#define PRINT "#include <stdio.h>%c#include <fcntl.h>%c%c#define PRINT %c%s%c%c#define FILE %cGrace_kid.c%c%c#define MAIN() int main(){char *c=PRINT;int fd=open(FILE, O_CREAT | O_RDWR,0777);dprintf(fd,c,10,10,10,34,c,34,10,34,34,10,10,10,10,10);}%c/*%c    comment%c*/%cMAIN();"
#define FILE "Grace_kid.c"
#define MAIN() int main(){char *c=PRINT;int fd=open(FILE, O_CREAT | O_RDWR,0777);dprintf(fd,c,10,10,10,34,c,34,10,34,34,10,10,10,10,10);}
/*
    comment
*/
MAIN();