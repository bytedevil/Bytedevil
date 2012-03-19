/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * main.c
 * Copyright (C) Pau Font 2012 <paufont@gmail.com>
 * 
 * Practica1_Ejercicio1 is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Practica1_Ejercicio1 is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
/*IMPORTANTE-WARNING-ATTENTION*/
/*DECLARAR LAS FUNCIONAS AL PRINCIPIO*/

float calculoperimetro(float numlado, float lado);
float calculoarea(float perimetro, float apotema);
/*FUNCIONES DECLARADAS, EMPIEZA LA FUNCIÓN PRINCIPAL*/

int main()
{
float lado, numlado, apotema, perimetro, area;

do
{
printf("Introduce el numero de lados\n");
scanf("%f", &numlado);
if (numlado!=0){
printf("Introduce la longitud\n");
scanf("%f", &lado);
printf("Introduce el apotema\n");
scanf("%f", &apotema);
perimetro=calculoperimetro(numlado, lado);
printf("El perimetro es %f\n", perimetro);
area=calculoarea(perimetro, apotema);
printf("El area es %f\n", area);
}
}
while (numlado!=0);
return 0; 
}
/*FIN DE LA FUNCIÓN PRINCIPAL, ESTO SON FUNCIONES LLAMADAS "CALCULOPERIMETRO" Y "CALCULOAREA"*/

float calculoperimetro(float numlado, float lado) /* Estos son variables de entrada para hacer el calculo, por eso aqui no ponemos la variable "perimetro"*/
{
float perimetro;/*La definimos aqui, al principio de la función*/
perimetro=numlado*lado;
return perimetro;/*Devolvemos el calculo a la variable "perimetro" de la función principal*/
}
float calculoarea(float perimetro, float apotema)
{
return (perimetro*apotema)/2;
}
