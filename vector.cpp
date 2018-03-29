
#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "cargar.h"
using namespace std;

#define MAX 200

void main()
{
	int tam,opcion,vec[MAX];
	cargar vec2;
	do
	{
		cout<<"----Menu----"<<endl;
		cout<<"Opcion1.Cargar vector"<<endl;
		cout<<"Opcion2.Mostrar vector"<<endl;
		cout<<"Opcion3.Ordenar vector"<<endl;
		cout<<"Opcion0.Salir"<<endl;

		cin>>opcion;

		switch(opcion)
		{
		case 1:
			cout<<"Ingrese el valor"<<endl;
	
			
				do
				{
				cin>>tam;
				}while(tam>MAX && tam<0);
			vec2.cargarvec(vec,tam);
			break;
		case 2:	
			cout<<"Ingrese el valor"<<endl;
			
				do
				{
				cin>>tam;
				}while(tam>MAX && tam<0);
			vec2.cargarvec(vec,tam);
			cout<<"Su vector es"<<endl;
			vec2.mostrarvec(vec,tam);
			break;

		case 3:	
			cout<<"Ingrese el valor"<<endl;
	
			do
			{
				cin>>tam;
			}while(tam>MAX && tam<0);
				vec2.cargarvec(vec,tam);
			vec2.ordenarvec(vec,tam);
					cout<<"Su vector ordenado es"<<endl;
			vec2.mostrarvec(vec,tam);
			break;
			default:
				cout<<"OPCION NO VALIDA"<<endl;
				break;
			
		}

		}while(opcion!=0);
	



}
