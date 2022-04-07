#include<stdio.h>
void
error(int l,char *line,char *txt)
{
fprintf(stderr,"[d] %s\nline %d: %s\n",line,l,txt);
}
