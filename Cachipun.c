#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Integrantes del grupo:
Julio Gordo Gómez
Agustín Guerrero Pinto
*/

void Bienvenida(void){
  printf("Bienvenido al cachipun\n");
  printf("==========================================\n");
}
/*
Procedimiento que da la Bienvenida al jugador
*/

void eleccion(char* elec,char array1[][10], char array2[][10], char array3[][10]){
  printf("Elige: Piedra, Papel o Tijera\n");
  scanf("%s",elec);
  printf("==========================================\n");
  if(recorrer(elec, array1, array2, array3)==0){
    printf("Por favor, seleccione un valor valido...\n");
    eleccion(elec, array1, array2, array3);
  }
}
/*
Procedimiento que recibe el elemento seleccionado por el
jugador, da a elegir entre piedra, papel o tijera.

Llama a la funcion recorrer, en caso de que ninguno de los
valores ingresados por el usuario corresponda a los
elementos del juego. En dicho caso, la funcion se llama
a sí misma.

Parametros:
char* elec: variable donde se guarda la eleccion del jugador
char array1[][10]: arreglo de posibles piedras
char array2[][10]: arreglo de posibles papeles
char array3[][10]: arreglo de posibles tijeras
*/

char* nuevo_valor(char* elec, char array1[][10], char array2[][10], char array3[][10]){
  for(int i = 0; i < 4; i++){
    if(strcmp(elec,array1[i])==0){
      return "Piedra";
    }
  }
  for(int i = 0; i < 4; i++){
    if(strcmp(elec,array2[i])==0){
      return "Papel";
    }
  }
  for(int i = 0; i < 4; i++){
    if(strcmp(elec,array3[i])==0){
      return "Tijera";
    }
  }
  return NULL;
}
/*
Funcion que retorna el elemento seleccionado por el jugador
con una lijera modificacion. Esta es que el elemento, lleve
la primera letra en mayuscula, y que además este en singular.
Esto se hace con el fin de hacer una comparacion menos
engorrosa al momento de verificar si el jugador pierde o gana

Parametros:
char* elec: eleccion del jugador
El resto, mismos parametros de la funcion eleccion()
*/

int recorrer(char* elec, char array1[][10], char array2[][10], char array3[][10]){
  for(int i = 0; i < 4; i++){
    if(strcmp(elec,array1[i])==0){
      return 1;
    }
  }
  for(int i = 0; i < 4; i++){
    if(strcmp(elec,array2[i])==0){
      return 1;
    }
  }
  for(int i = 0; i < 4; i++){
    if(strcmp(elec,array3[i])==0){
      return 1;
    }
  }
  return 0;
}
/*
Funcion que verifica si la eleccion del usuario corresponde
a los elementos del juego, recorriendo arreglos compuestos
por diferentes formas de referirse al elemento, que son 
comunes en nuestro lenguje. Si esta dentro de las 3 listas 
(separadas en distintas formas de referirse a piedra, papel
o tijera), retorna un 1, en caso contrrio, retorna un 0

Parametros:
Mismos parametros de la funcion nuevo_valor()
*/
