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
float lado, numlado, apotema, perimetro, area;
/*numlado=lado1+lado2+lado3;
perimetro=(numlado*lado);
Area=(perimetro*apotema)/2;*/
numlado=1;
while (numlado!=0)
{
printf("Introduce el numero de lados\n");
scanf("%f", &numlado);
printf("Introduce la longitud\n");
scanf("%f", &lado);
printf("Introduce el apotema\n");
scanf("%f", &apotema);
}

/*int main()
{
	return (0); 
}*/
