#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "insercion.hpp"
#include "burbuja.hpp"
#include "heapSort.hpp"
#include "quickSort.hpp"
#include "shellSort.hpp"
#include "DNI.hpp"

class Algoritmos
{
    public:
		Algoritmos(){};
		~Algoritmos(){};
		void modoEstadistica(int nPruebas, int n);
		void modoDemostracion(char,int n);
};

void Algoritmos::modoEstadistica(int nPruebas, int n)
{
	DNI* secuencia = new DNI[n];
	
	bool modo = true;

	for(int i=0; i<n; i++)
		secuencia[i] = (rand()%50000000)+30000000;
		
	int contrador_1=0, contrador_2=0,contrador_3=0,contrador_4=0,contrador_5=0;	
	Insercion<DNI>* insercion;
	Burbuja<DNI>* burbuja;
	ShellSort<DNI>* shellSort;
	HeapSort<DNI>* heapSort;
	QuickSort<DNI>* quickSort;
	
	
    for(int i=0; i < nPruebas; i++){
    	
		insercion->sort(secuencia,n,false, contrador_1);
		burbuja->sort(secuencia,n, false, contrador_2);
		heapSort->sort(secuencia,n, false, contrador_3);
		quickSort->sort(secuencia,n, false, contrador_4);
		shellSort->sort(secuencia,n, false, contrador_5);
    }
    
    std::cout << "Número de pruebas realizadas:" << nPruebas << std::endl;
	std::cout << "Inserción: " << contrador_1/nPruebas <<std::endl;
	std::cout << "Método de la burbuja: " << contrador_2/nPruebas <<std::endl;
	std::cout << "HeapSort: " << contrador_3/nPruebas <<std::endl;
	std::cout << "QuickSort: " << contrador_4/nPruebas <<std::endl;
	std::cout << "Incrementos Decrecientes (ShellSort): " << contrador_5/nPruebas <<std::endl;
}    

void Algoritmos::modoDemostracion(char algoritmo, int n)
{
    DNI* secuencia = new DNI[n];
	
	bool modo = true;

	for(int i=0; i<n; i++)
		secuencia[i] = (rand()%50000000)+30000000;
		
	int aux=0;	
    switch(algoritmo)
		{
			
			case '1':
				Insercion<DNI>* insercion;
				insercion->sort(secuencia,n, modo,aux);
				break;
				
			case '2':
				Burbuja<DNI>* burbuja;
				burbuja->sort(secuencia,n, modo,aux);
				break;
			case '3':
				HeapSort<DNI>* heapSort;
				heapSort->sort(secuencia,n, modo,aux);
				break;	
			case '4':
				QuickSort<DNI>* quickSort;
				quickSort->sort(secuencia,n, modo,aux);
				break;	
			case '5':
				ShellSort<DNI>* shellSort;
				shellSort->sort(secuencia,n, modo,aux);
				break;		
		}
		
}