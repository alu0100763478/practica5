#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "DNI.hpp"

#define delta 0.3

using namespace std;


template <class T>
class ShellSort
{
	public:
		ShellSort(){};
		~ShellSort(){};
		void sort(T* ,int, bool, int& contador);
		void deltasort(int d,T* v, int sz, int& contador);
};


template <class T>
void ShellSort<T>::deltasort(int d,T* v, int sz, int& contador)
{
    for(int i=d+1;i<=sz;i++)
	{
	    T x=v[i];
		int j=i;
		
		while((j>d)&&(x<v[j-d]))
		{
		    v[j]=v[j-d];
		    j=j-d;
		    contador++;
		}
		
		v[j]=x;
		contador++;
	}
	contador++;
}

template <class T>
void ShellSort<T>::sort(T* v, int sz, bool modo, int& contador)
{

    int del=sz;

    while(del>0)
    {
        del=del*delta;   
        deltasort(del,v,sz-1, contador);    
    }
    
    if( modo == true){
	    std::cout << "Mi vector ordenado: " << std::endl;
	    for(int k=0;k<sz;k++)
	    		cout<<v[k]<<" ";
	    std::cout << std::endl;	
    }   
}