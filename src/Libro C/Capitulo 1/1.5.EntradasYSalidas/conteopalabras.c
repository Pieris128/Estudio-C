#include <stdio.h>
#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */
/* cuenta lineas, palabras, y caracteres de la entrada */
int main( )
{
int c, nl, nw, nc, state;

state = OUT;
nl = nw = 0 ;
nc = -1;
while ((c = getchar( ))  != EOF) {
++nc;
if (c == '\n')
++nl;
if (c == ' ' || c == '\n' || c == '\t'){
state = OUT;}
else
{
state = IN;
nw++;
}
}
printf("%d %d %d\n",nl, nw, nc);
return 0;
}