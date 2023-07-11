#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void){
    srand(time(0));

    //variables
    int salud = 100;
    int saludf = 0;
    int saludMonstruo = 100;
    //El juego inicia com hambre y sed en cualquier valor, en este caso escribi 40 y 35.
    int hambre = 40;
    int sed = 35;
    int diaA = 1;
    int diaF = 10;
    int opcion;
    int opcionArmas;
    int probabilidad;

    //Constantes
    const int MAX_SALUD = 100;
    const int MAX_HAMBRE = 100;
    const int MAX_SED = 100;
    

    printf("Bienvenido a TRY TO SURVIVE ¿Podras sobrevivir? \n");
    printf("Has caido en un universo paralelo ¡Eres la unica persona! Debes tratar de sobrevivir por 10 días. \n");
    
    // Función para mostrar los valores actuales de vida, sed y hambre
    void mostrarEstadisticas() {
    printf("\n----- Estadisticas del Jugador -----\n");
    printf("Salud: %d/%d\n", salud, MAX_SALUD);
    printf("Hambre: %d/%d\n", hambre, MAX_HAMBRE);
    printf("Sed: %d/%d\n", sed, MAX_SED);
    printf("-----------------------------------\n");
    }

     // Función para comprobar si el jugador ha muerto
    int haMuerto() {
    return (salud <= 0);
    }

    // Función para comprobar si el jugador ha ganado
    int haGanado() {
    return (diaA > diaF);
    }

    //Switch de opciones del jugador

    do
    {
        printf("Que quieres hacer primero hoy? \n");
        printf("Opcion 1: Descansar \n");
        printf("Opcion 2: Buscar agua \n");
        printf("Opcion 3: Cazar \n");
        printf("Opcion 4: Buscar objetos \n");
        printf("Opcion 5: ¡Batalla final con el monstruo! \n");
        printf("Opcion 6: Salir del juego \n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Has elegido descansar, ha aumentado 10 puntos tu salud \n");
            salud = salud + 10;

            //Pasar al dia siguiente y calcular hambre, sed, salud
            diaA += 1;
            if (hambre >= MAX_HAMBRE){
                salud = salud - 20;
            }
            else{
                if (sed >= MAX_SED){
                    salud = salud - 30;
                }
            }
            printf("Tu salud actual es de %d \n" , salud );
            printf("Tu hambre actual es de %d \n" , hambre );
            printf("Tu sed actual es de %d \n" , sed );
            printf("Sobreviviste este dia, mañana te espera el: %d dia \n", diaA);
            break;
        case 2:
            printf("Has elegido buscar agua \n");
            probabilidad = rand()%100 + 1;
                if(probabilidad < 20){
                printf("Encontraste un arroyo, tu sed disminuyo 25 puntos \n");
                sed = sed - 25;
                printf("Tu sed actual es de %d \n" , sed );
                }
            else{
                if(probabilidad < 55){
                    printf("Encontraste varias botellas de agua casi vacias, disminuye la sed en 5 puntos \n");
                    sed = sed - 5;
                    printf("Tu sed actual es de %d \n" , sed );
                }
                else{
                    printf("Surgio un problema, te golpeaste al pasar por una montaña, disminuiste 5 puntos de vida y aun tienes sed \n");
                    salud = salud - 5;
                    printf("Tu sed actual es de %d \n" , sed );
                    printf("Tu salud actual es de %d \n" , salud );
                }
            }
             //Pasar al dia siguiente y calcular hambre, sed, salud
            diaA += 1;
            if (hambre >= MAX_HAMBRE){
                salud = salud - 20;
            }
            else{
                if (sed >= MAX_SED){
                    salud = salud - 30;
                }
            }
            printf("Tu salud actual es de %d \n" , salud );
            printf("Tu hambre actual es de %d \n" , hambre );
            printf("Tu sed actual es de %d \n" , sed );
            printf("Sobreviviste este dia, mañana te espera el: %d dia \n", diaA);
            break;
        case 3:
            printf("Has elegido cazar \n");
            probabilidad = rand() %100 + 1;
            if(probabilidad < 30){
                printf("Pudiste cazar un conejo pequeño, tu hambre disminuyo 30 puntos \n");
                hambre = hambre - 30;
                printf("Tu hambre actual es de %d \n" , hambre );
            }
            else{ 
                if(probabilidad < 60){
                printf("Pescaste algo, pero hay complicaciones para cocinarlo bien, tu hambre disminuyo 10 puntos \n");
                hambre = hambre - 10;
                printf("Tu hambre actual es de %d \n" , hambre );
                }
                else{
                    printf("¡Fuiste atacado por tigre! Has perdido 10 puntos de vida \n");
                    salud = salud - 10;
                    printf("Tu salud actual es de %d \n" , salud );
                }
            }
              //Pasar al dia siguiente y calcular hambre, sed, salud
            diaA += 1;
            if (hambre >= MAX_HAMBRE){
                salud = salud - 20;
            }
            else{
                if (sed >= MAX_SED){
                    salud = salud - 30;
                }
            }
            printf("Tu salud actual es de %d \n" , salud );
            printf("Tu hambre actual es de %d \n" , hambre );
            printf("Tu sed actual es de %d \n" , sed );
            printf("Sobreviviste este dia, mañana te espera el: %d dia \n", diaA);
            break;
        case 4:
            printf("Has elegido buscar objetos \n");
            probabilidad = rand() %100 + 1;
            if(probabilidad < 25){
                printf("Encontraste un kit de primeros auxilios, tienes 15 puntos mas de vida \n");
                salud = salud + 15;
                printf("Tu salud actual es de %d \n" , salud );
            }
            else{
                if(probabilidad < 50){
                printf("Encontraste un enlatado de atun, tu hambre disminuyo 10 puntos \n");
                hambre = hambre - 10;
                printf("Tu hambre actual es de %d \n" , hambre );
                }
                else{
                    if(probabilidad < 75){
                    printf("Encontraste un enjambre de avispas y te atacaron, perdiste 10 puntos de vida \n");
                    salud = salud - 10;
                    printf("Tu salud actual es de %d \n" , salud );
                    }
                    else{
                        printf("Tropezaste y caiste en un foso, perdiste 15 puntos de salud \n");
                        salud = salud - 15;
                        printf("Tu salud actual es de %d \n" , salud ); 
                    }
                }
                }
              //Pasar al dia siguiente y calcular hambre, sed, salud
            diaA += 1;
            if (hambre >= MAX_HAMBRE){
                salud = salud - 20;
            }
            else{
                if (sed >= MAX_SED){
                    salud = salud - 30;
                }
            }
            printf("Tu salud actual es de %d \n" , salud );
            printf("Tu hambre actual es de %d \n" , hambre );
            printf("Tu sed actual es de %d \n" , sed );
            printf("Sobreviviste este dia, mañana te espera el: %d dia \n", diaA);
            break;
        case 5: 
        //Agregué una opción más que dentro de ella contiene la función para probabilidad y un switch, esta opción consiste en como un nivel final del juego donde podrias perder muchos puntos de vida
        printf("BATALLA FINAL CON EL MONSTRUO \n");
            probabilidad = rand() %100 + 1;
            if(probabilidad < 50){
                printf("El monstruo te tomo desprevenido y te ataco, perdiste 70 puntos de vida \n");
                salud = salud - 40;
                printf("Tu salud actual es de %d \n" , salud );
            }
            else{
                do
                {
                printf("Escoge con que arma combatiras al monstruo \n");
                printf("Elige tu arma \n");
                printf("Opcion 1: Cuchillo \n");
                printf("Opcion 2: Bate \n");
                printf("Opcion 3: Escopeta \n");
                printf("Opcion 4: CORRAMOS \n");
                printf("Opcion 5: Rendirse \n");
                scanf("%d", &opcionArmas);

                switch (opcionArmas)
                {
                case 1:
                    printf("Pudiste apuñalar al monstruo, pero antes de eso te golpeo, el monstruo ha perdido 20 puntos de vida y tu 10 puntos \n");
                    salud = salud - 10;
                    saludMonstruo = saludMonstruo - 20;
                    if (salud <= 0){
                        printf ("Moriste, game over \n");
                    }
                    else{
                        printf("Su salud actual es de %d \n" , salud );
                    }
                    if (saludMonstruo <= 0){
                        printf ("Has matado al monstruo! \n");
                    }
                    else{
                        printf("La salud actual del monstruo es de %d \n" , saludMonstruo );
                    }
                    break;
                case 2:
                    printf("Tu golpe no afecto en nada al monstruo y el te ha pateado a ti, perdiste 60 puntos de vida \n");
                    salud = salud - 60;
                    if (salud <= 0){
                        printf ("Moriste, game over \n");
                    }
                    else{
                        printf("Su salud actual es de %d \n" , salud );
                    }
                    if (saludMonstruo <= 0){
                        printf ("Has matado al monstruo! \n");
                    }
                    else{
                        printf("La salud actual del monstruo es de %d \n" , saludMonstruo );
                    }
                    break;
                case 3:
                    printf("Le disparaste al monstruo, pero tienes mala puntería, solo fue una bala en la pierna, perdio 30 puntos de vida pudiste esconderte antes de que te atrape \n");
                    saludMonstruo = saludMonstruo - 30;
                    if (salud <= 0){
                        printf ("Moriste, game over \n");
                    }
                    else{
                        printf("Su salud actual es de %d \n" , salud );
                    }
                    if (saludMonstruo <= 0){
                        printf ("Has matado al monstruo! \n");
                    }
                    else{
                        printf("La salud actual del monstruo es de %d \n" , saludMonstruo );
                    }
                    break;
                case 4:
                    printf("El monstruo te alcanzó, perdiste 80 puntos de vida \n");
                    salud = salud - 80;
                    if (salud <= 0){
                        printf ("Moriste, game over \n");
                    }
                    else{
                        printf("Su salud actual es de %d \n" , salud );
                    }
                    if (saludMonstruo <= 0){
                        printf ("Has matado al monstruo! \n");
                    }
                    else{
                        printf("La salud actual del monstruo es de %d \n" , saludMonstruo );
                    }
                    break;
                case 5:
                    printf("GAME OVER \n");
                    break;
                default:
                    printf("Esta opcion no es valida");
                    break;
                }
                } while (opcionArmas != 5);

            }
        //Pasar al dia siguiente y calcular hambre, sed, salud
            diaA += 1;
            if (hambre >= MAX_HAMBRE){
                salud = salud - 20;
            }
            else{
                if (sed >= MAX_SED){
                    salud = salud - 30;
                }
            }
            printf("Tu salud actual es de %d \n" , salud );
            printf("Tu hambre actual es de %d \n" , hambre );
            printf("Tu sed actual es de %d \n" , sed );
            printf("Sobreviviste este dia, mañana te espera el: %d dia \n", diaA);
            break;
        case 6:
            printf("Gracias por jugar \n");
                break;   
        default:
            printf("Esta opcion no es valida");
            break;

         // Verificar si el jugador ha muerto o ganado
        if (haMuerto()) {
        printf("¡Has muerto! Game Over.\n");
        } 
        else{
        if (haGanado()) {
        printf("¡Has sobrevivido los %d días! ¡Has ganado!\n", diaF); 
        } 
        else {
            mostrarEstadisticas();
        printf("Comienza el día %d.\n", diaA);
        printf("Selecciona una opción:\n");
        printf("1. Descansar\n");
        printf("2. Buscar agua\n");
        printf("3. Cazar\n");
        printf("4. Buscar objetos\n");
        printf("Opcion 5: ¡Batalla final con el monstruo! \n");
        printf("Opcion 6: Salir del juego \n");
       }
       }
       }
    } while (opcion != 6);
    

        return 0;
    }
        
    