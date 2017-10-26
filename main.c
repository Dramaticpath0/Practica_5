//
//  main.cpp
//  Busqueda Binaria
//
//  Created by Pablo Fernando Gonzalez de Lara on 26/10/17.
//  Copyright © 2017 Pablo Fernando Gonzalez de Lara. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    //variables
    int vector[5] = {99,88,2,5,0};
    int i, j, aux;
    int respuesta;
    //Proceso
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(vector[j] > vector [j+1]){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
    printf("ingresa el valor a buscar \n");
    scanf("%d",&respuesta);
    for (i=0; i<5; i++) {
        if (respuesta==vector[i]) {
            printf("El numero ingresado %d esta en la posicion %d : %d \n",respuesta ,i,vector[i]);
        }
        else{
            printf("numero no encontrado \n");
        }

    }
    //Salida
    for(i=0; i<5; i++){
        printf("%i ", vector[i]);
    }
    printf("\n");
    return 0;
}
