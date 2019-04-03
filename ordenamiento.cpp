#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstring>

int * TA;
int * TB;

typedef long long myint;
typedef void(*fun_sort)(int* , int);

bool test_sort(fun_sort sort,const int *A,int n){
	memcpy(TA,A,sizeof(int)*n);
	memcpy(TB,A,sizeof(int)*n);
	
	
	    clock_t t=clock();
	    sort(TA,n);
	    float time = float (clock()-t)/CLOCKS_PER_SEC;
	    
	    std::sort(TB , TB+n);
	    for(int i=0 ;i<n;i++)
	     if(TA[i]!= TB[i]) return false;
	     std::cout<<time<<" ";
	    return true ;
	    
}
void ordenamientoburbuja(int *A,int n){
	int temp;
	int j;
	 for (int i=1; i<n; i++){
	 
          for ( j=0 ; j<n - 1; j++){
		  
               if (A[j] > A[j+1]){
			   
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;}
				}}
}
void Ordenamiento_selec(int *A, int n){
	int z=0,j,i,temp=0;
	for ( i=0; i<n; i++)
          for ( j=i+1 ; j<n ; j++)
          if(A[j]<A[z]);{
            z=j;
		   	
		  }
           
		     temp = A[i];
             A[i] = A[z];
             A[z] = temp;
		 z=i+1 ; 
		  
}


void ordenamiento_inserc(int *A, int n){
	int cont = 0;

	for (int i = 1; i < n; i++) {
		int y = A[i];
		int j = i - 1;

		while ((j >= 0) && (A[j] > y)) {
			A[j + 1] = A[j];
			j--;
			cont++;
		}

		A[j + 1] = y;
	}

	
}


int main (){
	int n=7;
	int array[n]={5,4,2,7,8,9,7};
	int *a = array;
	 
	 ordenamiento_inserc(array,n);
	 


	for(int i=0;i<n;i++){
		std::wcout<<array[i]<<" ";
	}
	
	return 0;

}

