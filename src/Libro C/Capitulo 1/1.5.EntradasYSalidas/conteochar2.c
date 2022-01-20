#include <stdio.h>
/* cuenta los caracteres de la entrada; 2 a. versión */
int main( )
{
double nc;
for (nc = -1; getchar( ) != EOF; ++nc);
printf("%.0f\n", nc);
}