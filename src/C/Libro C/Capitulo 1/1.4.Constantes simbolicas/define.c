#include <stdio.h>

#define LOWER 0     //límite inferior de la tabla 
#define UPPER 300    //limite superior
#define STEP 20      //tamaño del incremento

/* imprime la tabla Fahrenheit-Celsius */

int main() {
    
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP);
    printf("°/o3d %6.1í\n", fahr, (5.0/9.0) * (fahr-32));

return 0;
}