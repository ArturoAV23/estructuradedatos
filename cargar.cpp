#include "StdAfx.h"
#include "cargar.h"
#include <iostream>

using namespace std;

cargar::cargar(void)
{

}


cargar::~cargar(void)
{
}
	void cargar::cargarvec(int v[],int n)
	{
		int i=0;
		for(i=0;i<n;i++)
		{
			cin>>v[i];
		
		}

	}
	void cargar::mostrarvec(int v[],int n)
	{
		int i=0;
		for(i=0;i<n;i++)
		{
			cout<<v[i]<<endl;
		
		}
	
	}

	void cargar::ordenarvec(int v[],int n)
	{
		int i=0,j=0,auxiliar;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(v[i]>v[j])
				{
			    auxiliar=v[j];
			    v[j]=v[i];
			    v[i]=auxiliar;
				}
			}
		
		
		}
	
	}

