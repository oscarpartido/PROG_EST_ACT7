/*AUTOR: OSCAR VIVALDI PARTIDO RAMIREZ, REALIZADO EL DIA 10/02/2022

programa para una tiernda de Arduinos, dicha tienda existe una promocion

-hay 5% en todas las compras

-si se llevan minimo 5 arduinos, se les hace el 15 %de descuento

-si se compran 10 o mas, tienen el 25% de descuento

cada arduino tiene un costo de $350.00

El programa pedira la cantidad de ARDUINOS Y CALCULARA el total a pagar

usando el operador ternaario

*/

#include <stdio.h>

int main(){

//declarar variables

int arduinos;

float total, descuento=0;

printf("ingresa la cantidad de arduinos: ");

scanf("%d", &arduinos);

//proceso

total=arduinos*350.00;

if(arduinos>9){

descuento=total*0.25;

}

if(arduinos>4 && arduinos<10){

descuento=total*0.15;

}

else{

descuento=total*0.05;

}

printf("subtotal:\t $%11.2f\n",total);

printf("descuento:\t-$%11.2f\n",descuento);

printf("\t\t---------\n");

printf("total:\t\t $%11.2f", total-descuento);

return 0;

}
