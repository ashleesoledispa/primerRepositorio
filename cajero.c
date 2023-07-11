#include <stdio.h>
#include <string.h>

#define max_retiro = 400
#define PASS 2208
int main(void){
    
    int password;
    float deposito;
    float retiro;
    char user[20];
    char userEstatico[20]= "ashleesoledispa";
    int opcion;
    float saldoInicial= 400;
    char sn;
    printf("Bienvenido a su banca virtual \n");
    printf("Ingrese su nombre de usuario \n");
    scanf("%s", user);
    printf("Ingrese su clave \n");
    scanf("%d", &password);

    if(strcmp(userEstatico,user) == 0
        && PASS == password){
            printf("Ha ingresado a su banca virtual de forma exitosa \n");
            do
            {
            printf("Elige una opcion (1-3): \n");
            printf("Escribir 1 para realizar un deposito \n");
            printf("Escribir 2 para realizar un retiro \n");
            printf("Escribir 3 para Salir \n");
            scanf("%d", &opcion);

            switch (opcion)
            {
            case 1:
                printf("Has elegido realizar un deposito \n");
                printf("Ingrese la cantidad que desea depositar \n");
                scanf("%f", &deposito);

                if(deposito>5000){
                    fflush(stdin);
                    printf("¿Estas seguro que deseas depositar esta cantidad? S/N \n");
                    scanf("%c", &sn);
                    if(sn =='S'){
                        saldoInicial= saldoInicial + deposito;
                    }
                    else{
                        printf("Gracias por usar la banca virtual \n");
                    }
                }
                else{
                    saldoInicial= saldoInicial + deposito;
                }
                printf("Su deposito se ha realizado correctamente \n");
                printf("El saldo actual de su banca virtual es de %.2f \n" , saldoInicial );
                
                break;
            case 2:
                printf("Has elegido realizar un retiro \n");
                printf("Ingrese la cantidad que desea retirar \n");
                scanf("%f", &retiro);

                if(retiro>400){
                    printf("No se puede retirar esta cantidad, debe ser menor a 400 \n");
                }
                else{
                    if(retiro <= saldoInicial){
                    saldoInicial= saldoInicial - retiro;
                    printf("La cantidad que ha retirado es de %.2f \n" , retiro );
                    printf("El saldo actual de su banca virtual es de %.2f \n" , saldoInicial );
                    }
                    else{
                        printf("La cantidad de su cuenta es insuficiente. \n");
                    }
                }
                break;
            case 3:
                printf("Gracias por usar la banca virtual \n");
                break;
            
            default:
                printf("Opcion no valida \n");
                break;
            }
            } while (opcion != 3);
    }
    else{
        printf("Datos incorrectos, no se ha podido ingresar");
    }

    return 0;
}

