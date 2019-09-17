#include <stdlib.h>
#include <stdio.h>

int soma(int * p){
	int aux;
	int retorno;
	if(*p > 0){
		aux = *p - 1;
		retorno = soma(&aux) + aux;
		printf("%d ", aux);
	}else{
		return 0;
	}
	return retorno;
}

int pares(int *p, int *q){
	int aux;
	if(*p <= *q){
		if(*p%2 != 0){
			*p +=1;
		}
		aux = *p + 2;
		printf("%d ", *p);
		return pares(&aux, q) + *p;
	}else{
		return 0;
	}
	
}

int main(){
	int s= 5, q = 12;
	
	printf("\n\n%d",pares(&s, &q));
}
