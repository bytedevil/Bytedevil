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
float resultado(float x1, float x2, float y1, float y2);
int main()
{
float x1, x2, y1, y2;
printf("Introduce el X1\n");
scanf("%f", &x1);
printf("Introduce el X2\n");
scanf("%f", &x2);
printf("Introduce el Y1\n");
scanf("%f", &y1);
printf("Introduce el Y2\n");
scanf("%f", &y2);

printf("El resultado es %f\n", resultado(x1,x2,y1,y2));
}

float resultado(float x1, float x2, float y1, float y2)
{
float resultado;
resultado=(y2-y1)/(x2-x1);
return resultado;

}

