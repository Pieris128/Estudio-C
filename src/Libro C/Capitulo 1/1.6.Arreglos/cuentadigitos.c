#include <stdio.h>
/* cuenta dígitos, espacios blancos, y otros */
int main()
{
int c, i, nwhite, nother;
int ndigit[10];
nwhite = nother = 0 ;
for (i = 0; i < 10; ++i)
ndigit[i] = 0 ;
while ((c = getchar( )) != EOF){
if (c >= '0' && c <= '9')
++ndigit [c—'O'];
else if (c == " " || c == '\n' || c == '\t')
++nwhite;
else
++nother;}
printf ("dígitos = ");
for (i = 0;i<10;++i)
printf(" %d", ndigit[i]);
printf("espacios blancos = %d , otros = %d\n", nwhite, nother);
return 0;
}