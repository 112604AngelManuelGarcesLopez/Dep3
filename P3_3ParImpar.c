/*Dep3_Prog3:
Verificar si es par o impar*/
 #include <stdio.h>

 int main()
 {
    int numero;
    printf("\n Introduce el numerob");
    scanf("%d", &numero);
    
    if( numero%2 == 0)
    {
       printf("\n El numero es PAR ");
    }
    else
    {
       printf("\n El numero es IMPAR ");
    }
    
    return 0;
 }