#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "DNI.hpp"

using namespace std;


template <class T>
class Insercion
{
	public:
		Insercion(){};
		~Insercion(){};
		void sort(T* ,int, bool, int& contador);
};

template <class T>
void Insercion<T>::sort(T* v, int sz, bool modo, int& contador)
{
    if(modo == true){
        std::cout << "Mi vector: " << std::endl;
        for(int k=0;k<sz;k++)
    		cout<<v[k]<<" ";
        std::cout << std::endl;    
    }
    		
    for (int i = 0; i < sz; i++ )
    {
        int j = i ;
        T x = v[i] ;
        
        int ini = 0, fin = i-1, med;

        while ( ini <= fin )
        {
            med = (ini+fin)/2;
            if(modo == true)
            cout<<"\nComparando: "<<v[med]<<" " <<" con "<<v[i] << std::endl;
            if (v[med] < x) ini = med+1;
            else    fin = med-1;
            contador++;
        }
        
        for (int j = i-1; j >= ini; j--)
            v[j+1] = v[j] ;
        
        v[ini] = x ;

    }
    
    if(modo == true){
        std::cout << "Mi vector ordenado: " << std::endl;
        for(int k=0;k<sz;k++)
        		cout<<v[k]<<" ";
        std::cout << std::endl;	
    }
}