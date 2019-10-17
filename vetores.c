#include <stdio.h>
#include <stdlib.h>

float media(float * vetor, int n){
		
	float soma = 0;
	int i;
	for(i=0;i<n;i++){
		soma = soma +vetor[i];
	}
	
	soma = soma/n;
	
	return soma;
	
}

float variancia(float * vetor, int n, float med){
	float soma =0;
	int i;
	for(i=0;i<n;i++){
		soma = soma + (vetor[i]-med)*(vetor[i]-med);
	}
	
	soma = soma/n;
	
	return soma;
}

int main(){
	int n;
	printf("Digite a quantidade de numeros: ");
	scanf("%d",&n);
	float * vetor = (float*) malloc(sizeof(float) * n);
	int i;
	for(i=0;i<n;i++){
		printf("Digite o numero real: ");
		scanf("%f", &vetor[i]);
	}
	
	printf("%f ", media(vetor,n));
	

	return 0;
}
