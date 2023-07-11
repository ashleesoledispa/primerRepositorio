#include <stdio.h>
#include <string.h>

int main(void){

int opcion;
int numero;
int factorial = 1;
int i= 1; 
int dig =  0;
int palindromo = 0;
int aux;
int num;
int originalnum;
int resultado = 0;
int residuo;
int n;

printf("Bienvenido \n");
            do
            {
            printf("Elige una opcion \n");
            printf("Escribir 1 para Factorial usando For \n");
            printf("Escribir 2 para Factorial usando Do While \n");
            printf("Escribir 3 para Factorial usando While \n");
            printf("Escribir 4 para calcular palindromo de un numero \n");
            printf("Escribir 5 para calcular un numero armstrong \n");
            printf("Escribir 6 para Salir \n");
            scanf("%d", &opcion);
            switch (opcion)
            {
            case 1:
                printf(" For \n");
                printf("Ingrese un número entero positivo: \n");
                scanf("%d", &numero);
                if (numero < 0) {
                printf("El número debe ser positivo.\n");
                }
                for (int i = 1; i <= numero; i++)
                factorial *= i;
                printf("El factorial de %d es: %d\n", numero, factorial);
                break;
            case 2:
                printf(" Do While \n");
                factorial = 1;
                printf("Ingrese un número entero positivo: ");
                scanf("%d", &numero);
                if (numero < 0) {
                printf("Error: el número debe ser positivo.\n");
                }
                
                do
                {
                    factorial*= i;
                    i++;

                } while (i <= numero);
                printf("El factorial de %d es: %d\n", numero, factorial);
                break;
            case 3:
                printf("While \n");
                factorial = 1;
                printf("Ingrese un número entero positivo: ");
                scanf("%d", &numero);

                if (numero < 0) {
                printf("Error: el número debe ser positivo.\n");
                }
                
                while (i <= numero)
                {
                    factorial*= i;
                    i++;
                }
                printf("El factorial de %d es: %d\n", numero, factorial);
                break;
            case 4:
                printf("Numero palindromo \n");
                printf("Por favor ingrese un numero \n");
                scanf("%d", &num);
                aux=num;

                do //8579
                {
                   dig= aux%10; 
                   palindromo= (palindromo*10)+dig; 
                   aux= aux/10; 
                } while (aux != 0);

                if (palindromo==num)
                {
                    printf("El numero si es palindromo \n");
                }
                else 
                {
                    printf("El numero no es palindromo \n");
                }
                break;
                
                
            case 5:
                printf("Numero armstrong \n");
                printf("Por favor ingrese un numero \n");
                scanf("%d", &n);
                originalnum= n;
                while (originalnum != 0)
                {
                    residuo = originalnum %10;
                    resultado += residuo;
                    originalnum /=10;
                }
                if (resultado == n)
                {
                    printf("%d Es un numero armstrong \n" , n);
                }
                else {
                    printf("%d No es un numero armstrong \n" , n);
                }
                break;
            case 6:
                printf("Gracias por usar el programa \n");

                break;

            default:
                printf("Esta opcion no es valida \n");
                break;
            }
            
            } while (opcion != 6);
            
    return 0;
}
    