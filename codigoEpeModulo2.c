#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int aux1,aux2,edad,rangoEdad;
	
	
	printf("----------------------------trabajo Epe modulo 2----------------------------- \n\n");
	
	//el programa lo dejo dentro de un do while para asegurarme que se ejecute al menos una vez
	do{	
		//primer punto de desicion donde solicito una respuesta para seguir con el flujo de codigo o detenerlo
		printf("-Ingrese el numero 1 para iniciar programa de validacion de edad \n");
		printf("-Ingrese el numero 2 para terminar el programa \n\n");
		scanf("%d",&aux1);
		
		//evaluo el valor de la variable recien ingresada a traves de un switch
		switch(aux1){
			case 1:	
				//dentro de est case realizo nuevamente un ciclo do while en el caso de querer ejecutar nuevamente 
				//el programa en caso si se ingresa un valor fuera de rango o si desea evaluar otra edad 
				do{
					//solicito el ingreso de edad
					printf("Ingrese una edad: \n\n");
					scanf("%d",&edad);
					printf("---------------------------------------------------------------------------- \n\n");
					
					//al año actual le resto la edad ingresada para saber el año de nacimiento
					rangoEdad=2023-edad;
					
					//primerra evaluacion if -- else para poder saber si el valor ingresado se encuentra dentro de
					//los margenes que pueden dar respuesta, en caso de ser else se infroma que se ingreso una edad fuera de rango
					//y se le pregunta si quiere volver a ingresar una edad o salir del sistema
					if(rangoEdad>=1930 && rangoEdad<=2023){
						
						//evaluaciones if --  else if --- else para comparar el rango de edad ingresado y responder 
						//al grupo de edad que pertenece la edad ingresada
						if(rangoEdad>=1930 && rangoEdad<=1948){
							//muestro la edad ingresada y el rango de la generacion a la que pertenece
							printf("la edad ingresada es: ");
							printf("%d", edad);
							printf("\n\n");
							printf("por lo que se encuentra en el rango de: ");
							printf("Generación niños de posguerra (1930-1948) \n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							//solicito una respuesta si es que quiere volver a ejecutar una validacion de edad o salir del programa
							printf("Ingrese 1 si desea repetir el programa de validacion \n\n");
							printf("ingrese 2 si desea salir  \n\n");
							//capturo la respuesta en una variable aux2
							scanf("%d",&aux2);
							printf("\n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							//evaluo el valor de la variable aux2 para tomar la desicion de repetir el programa o detenerlo 
							//a traves de un switch case
							switch(aux2){
								case 1:
									//opcion 1 se decidio seguir con el programa y se vulve a ejecutar el ciclo do while que 
									//solicita un ingreso de edad para verificarla
									printf("ha decidido repetir el programa \n\n");
									printf("---------------------------------------------------------------------------- \n\n");
									break;
									
								case 2: 
									//este case2 lo que hace es terminar con el programa, por lo que el aux2 detendra este ciclo do while 
									//que solicita la edad, por lo que se volvera al primer swhitch que pregunta si quiere iniciar o terminar el programa
									//como el case 1 del primer switch no tiene un "break" pasara a comparar el valor del aux1 si es que tiene valor 2
									//para poder entrar a ese case2 el cual detendra la ejecucion del programa 
									
									//aqui se le da el valor de 2 a la variable aux1 
									aux1=2; 
									break;
									
								//en el caso de ingresar otro numero se dara el valor por defecto 1 a la aux2 por lo que se volvera
								//a solicitar el ingreso de edad en el programa 
								default: 
									aux2=1 ;
							}
						
						}
						
						//evaluacion rango de edad 
						else if(rangoEdad>=1949 && rangoEdad<=1968){
							printf("la edad ingresada es: ");
							printf("%d", edad);
							printf("\n\n");
							printf("por lo que se encuentra en el rango de: ");
							printf("Baby boomers (1949-1968) \n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							//desicion seguir o terminar el programa
							printf("Ingrese 1 si desea repetir el programa de validacion \n\n");
							printf("ingrese 2 si desea salir  \n\n");
							scanf("%d",&aux2);
							printf("\n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							//evaluacion de la desicion
							switch(aux2){
								case 1:
									printf("ha decidido repetir el programa \n\n");
									printf("---------------------------------------------------------------------------- \n\n");
									break;
								case 2: 
									aux1=2; 
									break;
								default: 
									aux2=1 ;
							}
						}
						
						else if(rangoEdad>=1969 && rangoEdad<=1980){
							printf("la edad ingresada es: ");
							printf("%d", edad);
							printf("\n\n");
							printf("por lo que se encuentra en el rango de: ");
							printf("Generación X (1969-1980) \n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							printf("Ingrese 1 si desea repetir el programa de validacion \n\n");
							printf("ingrese 2 si desea salir  \n\n");
							scanf("%d",&aux2);
							printf("\n\n");
							printf("---------------------------------------------------------------------------- \n\n");
						
							switch(aux2){
								case 1:
									printf("ha decidido repetir el programa \n\n");
									printf("---------------------------------------------------------------------------- \n\n");
									break;
								case 2: 
									aux1=2; 
									break;
								default: 
									aux2=1 ;
							}
						}
						else if(rangoEdad>=1981 && rangoEdad<=1993){
							printf("la edad ingresada es: ");
							printf("%d", edad);
							printf("\n\n");
							printf("por lo que se encuentra en el rango de: ");
							printf("Los millennials (1981-1993) \n\n");
							printf("---------------------------------------------------------------------------- \n\n");
				
							printf("Ingrese 1 si desea repetir el programa de validacion \n\n");
							printf("ingrese 2 si desea salir  \n\n");
							scanf("%d",&aux2);
							printf("\n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							switch(aux2){
								case 1:
									printf("ha decidido repetir el programa \n\n");
									printf("---------------------------------------------------------------------------- \n\n");
									break;
								case 2: 
									aux1=2; 
									break;
								default: 
									aux2=1 ;
							}
						}
						else if(rangoEdad>=1994 && rangoEdad<=2009){
							printf("la edad ingresada es: ");
							printf("%d", edad);
							printf("\n\n");
							printf("por lo que se encuentra en el rango de: ");
							printf("La generacion Z (1994-2009)) \n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							printf("Ingrese 1 si desea repetir el programa de validacion \n\n");
							printf("ingrese 2 si desea salir  \n\n");
							scanf("%d",&aux2);
							printf("\n\n");
							printf("---------------------------------------------------------------------------- \n\n");
						
							switch(aux2){
								case 1:
									printf("ha decidido repetir el programa \n\n");
									printf("---------------------------------------------------------------------------- \n\n");
									break;
								case 2: 
									aux1=2; 
									break;
								default: 
									aux2=1 ;
							}
						}
						else if(rangoEdad>=2010 && rangoEdad<=2023){
							printf("la edad ingresada es: ");
							printf("%d", edad);
							printf("\n\n");
							printf("por lo que se encuentra en el rango de: ");
							printf("La generacion Alpha (2010-actualidad) \n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							printf("Ingrese 1 si desea repetir el programa de validacion \n\n");
							printf("ingrese 2 si desea salir  \n\n");
							scanf("%d",&aux2);
							printf("\n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							switch(aux2){
								case 1:
									printf("ha decidido repetir el programa \n\n");
									printf("---------------------------------------------------------------------------- \n\n");
									break;
								case 2: 
									aux1=2; 
									break;
								default: 
									aux2=1 ;
							}
						
						}
						
					}
					
					//al no ingresar una edad en el rango que se puede determinar su generacion se entra a este else 
					else{
							printf("ha ingresado un valor que no esta en el rango de edades \n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							//se solicita una desicion de repetir la solicitud de edad o terminar el programa
							printf("Ingrese 1 si desea repetir el programa de validacion \n\n");
							printf("ingrese 2 si desea salir  \n\n");
							scanf("%d",&aux2);
							printf("\n\n");
							printf("---------------------------------------------------------------------------- \n\n");
							
							//evaluacion de la desicion tomada
							switch(aux2){
								case 1:
									printf("ha decidido repetir el programa \n\n");
									printf("---------------------------------------------------------------------------- \n\n");
									break;
								case 2:
									aux1=2; 
									break;
								default: 
									aux2=1 ;
							}
							
						}
						
					//al decidiir repetir la solicitud de evaluacion de edad 
					//se comapra si la desicion tomada para poder repetir o salir del bucle do while		
				}while(aux2==1);
				
				//como este case 1 no cuenta con break, se pasa a evaluar al case2 el valor
				//de la variable aux1, como esa variable se sobre escribio con valor 2 en la desicion de detener 
				//el programa entrara al siguiente case
				
				
			case 2:
				//en este case se detiene el programa, ya sea porque se decidio desde el primer menu
				//o porque se decidio detener el programa dentro del do while que hace la evaluacion de edad
				//y se procede a mostrar un mensaje de despedida
				printf("****************************Se ha finalizado el programa******************** \n\n");
				break;	
				//con este break se detiene el switch y se pasa a la comparacion del primer do while
					
		}
	
	//aqui se evalua si es que la variable aux1 rompe o no con la validacion del bucle do while
	}while(aux1=!2);
		
	return 0;
}
