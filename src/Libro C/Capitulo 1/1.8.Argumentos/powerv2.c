/* power: eleva la base a la n-ésima potencia; n > = 0 ; versión 2 */
int power(int base, int n)
{
int p;
for (p = 1 ; n > 0 ; — n)
p = p * base;
return p;
}