#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Cual es el nombre del producto?\n");
    
    char producto[80];

    scanf("%s", &producto);

    printf("Cual es el precio?\n");

    double precio = 0;

    scanf("%lf", &precio);

    printf("El precio del producto %s es %lf\n\n", producto, precio*1.18);

    return 0;
}