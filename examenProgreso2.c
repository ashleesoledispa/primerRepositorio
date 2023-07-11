#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FINAL = "terminar";

int main(void){

int lote;
float frutas;
char condicion [20];
float totalFrutas= 0;
float frutasMalas= 0;
float frutasPasadas= 0;
float frutasMaduras= 0;
int cadena;
float porcentajeMalas;
float porcentajePasadas;
float porcentajeMaduras;
float MalasPasadas;
float precio;
int opcion1;
int opcion2;
int opcion3;
int opcion4;

printf("Bienvenido, programa para examinacion del estado de frutas \n");
printf("Escriba el precio inicial del lote de frutas: \n");
scanf("%d", &lote);


do
{
   printf("Ingrese la condicion de la fruta: mala, madura, pasada y escribir la palabra terminar para dejar de ingresar \n");
   scanf("%s", &condicion);

   cadena = strcmp (FINAL, condicion);

   if (!opcion1){ 
    printf("Se ha ingresado una fruta mala \n");
    frutasMalas += 1;
    
   }
   else{
    if (!opcion2){
        printf("Se ha ingresado una fruta pasada \n ");
        frutasPasadas += 1;
    }
    else{
        if(!opcion3){
            printf("Se ha ingresado una fruta madura  \n ");
            frutasMaduras +=1;
            }
        }
        }
    
   
   
totalFrutas += 1;

} while ( opcion4 != 0);

printf("Total de frutas:  %.2f \n" , totalFrutas );
printf("Frutas malas:  %.2f \n" , frutasMalas );
porcentajeMalas = (frutasMalas * 100) / totalFrutas;
printf("Porcentaje frutas malas:  %.2f \n" , porcentajeMalas );
printf("Frutas maduras:  %.2f \n" , frutasMaduras );
porcentajeMaduras = (frutasMaduras * 100) / totalFrutas;
printf("Porcentaje frutas maduras:  %.2f \n" , porcentajeMaduras );
printf("Frutas pasadas:  %.2f \n" , frutasPasadas );
porcentajePasadas = (frutasPasadas * 100) / totalFrutas;
printf("Porcentaje frutas pasadas:  %.2f \n" , porcentajePasadas );

MalasPasadas = porcentajeMalas + porcentajePasadas;

if (MalasPasadas >= 30) {
    printf("No se compra el lote.  \n ");
}
else{
    if (MalasPasadas > 15 && MalasPasadas < 30){
        precio = (lote * 70)/100;
        printf("Se propone comprar el lote por un 70 por ciento del precio original, es decir, por:   %.2f \n" , precio );
    }
    else{
        if (porcentajeMalas < 5 && porcentajePasadas > 5){
            precio = (lote * 80)/100;
            printf("Se propone comprar el lote por un 80 por ciento del precio original, es decir, por:   %.2f \n" , precio );
        }
        else{
            printf("Se compra el lote por el precio original.  \n ");
        }
    }

}
    return 0;
}
     
