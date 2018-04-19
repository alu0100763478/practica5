#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "DNI.hpp"

using namespace std;


template <class T>
class QuickSort
{
	public:
		QuickSort(){};
		~QuickSort(){};
		void sort(T*, int, bool modo, int& contador);
		void qqsort(T* v,int ini, int fin, bool modo, int& contador);
};

template <class T>
void QuickSort<T>::qqsort(T* v,int ini, int fin, bool modo, int& contador)
{
    int i=ini;
    int f=fin;  
    
    T p=v[(i+f)/2];

    while(i<=f)
    {
    if( modo == true)
    cout<<"Pivote: "<<p<<endl;

    while (v[i] < p) 
	{
        i++;
        if( modo == true)
        cout<<"Comparando: "<<v[i]<<endl;
        contador++;
	}
	
    while (v[f] > p)
	{
	      if( modo == true)
        cout<<"Comparando: "<<v[f]<<endl;
        f--;
        contador++;
	}

    
    if(i<=f)
	{
        T x=v[i];
        v[i]=v[f];
        v[f]=x;
        i++;f--;
        contador++;
    }

    if( modo == true){
      for(int i=ini;i<=fin;i++)
  	    cout<<v[i]<<" ";
      cout<<endl;
    }  

  }
  
  contador++;
  
  if(ini<f)
    qqsort(v,ini,f,modo, contador);
  
  if(i<fin)
    qqsort(v,i,fin, modo, contador);
    
}

template <class T>
void QuickSort<T>::sort(T* v, int sz, bool modo, int& contador)
{
	qqsort(v,0,sz-1, modo, contador);
	
}