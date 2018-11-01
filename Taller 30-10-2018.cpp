/*programa: struct anidados
  Fecha: 31/10/2018
  Elaborado por: Santiago Quintero C.
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct producto//estructuta donde se almacenan los codigos decripcion y precio del producto
	{
	int cod;
	char nom[40];
	float precio;
    };
struct tienda //estructura donde se guarda el nombre de la tienda
	{
	char ti[40];
	struct producto prod[4];
    };
struct venta//estructura donde se guarda la suma de los cuatro cuatro productos de cada tienda
	{
	int suma;
		struct tienda tien[4];
    }vent[4]; 


struct producto crear (){//funcion que guarda los datos de las tiendas
	
	
	
		for(int i=0;i<4;i++)
		{
			printf("Ingrese el nombre de la tienda %d:",i+1);
			gets(vent[i].tien[i].ti);
			for(int k=0;k<4;k++)
			{
	printf("Ingrese el codigo del producto %d\n",k+1);
	scanf("%i",&vent[i].tien[i].prod[k].cod);
	fflush(stdin);
	printf("Ingrese la descripcion\n");
    gets(vent[i].tien[i].prod[k].nom);
	printf("Ingrese el precio\n");
	scanf("%f",&vent[i].tien[i].prod[k].precio);
	getch();
	vent[i].suma=vent[i].suma+vent[i].tien[i].prod[k].precio;
	fflush(stdin);
	}}
	return vent[4].tien[4].prod[4];//retorna las 4 sumas y el resto de datos
}
int main ()
	{
	struct producto prod1;
	prod1=crear();//los valores se le asignan a una variable x
	fflush(stdin);
	
	for(int i=0;i<4;i++)//ciclo que me imprime el registro guardado anteriormente
	{
		printf("\ntienda:%s\n",vent[i].tien[i].ti);
			   printf("\ncodigo    nombre    precio\n");
		for(int k=0;k<4;k++)
		{			
			printf("%d     %s     %.2f\n",vent[i].tien[i].prod[k].cod,vent[i].tien[i].prod[k].nom,vent[i].tien[i].prod[k].precio);
			fflush(stdin);
		}
		fflush(stdin);
		printf("\nTotal: %d\n",vent[i].suma);
	}}
	

		  
