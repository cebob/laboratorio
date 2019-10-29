#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

float desvio_padrao(){
	
	float * v = NULL;
	float media = 0, desvio = 0;
	int n;
	printf("Digite a quantidade de numeros:");
	scanf("%d", &n);
	
	v = (float *) malloc(sizeof(float) *n);
	int i;
	printf("Digite os numeros:");
	for(i = 0;i<n;i++){
		scanf("%f", &v[i]);
	}
	
	for(i = 0;i<n;i++){
		media += v[i];
	}
	
	media = media/n;
	
	for(i = 0;i<n;i++){
		desvio += (v[i] - media)*(v[i] - media);
	}
	
	desvio = desvio/n;
	desvio = sqrt(desvio);
	
	return desvio;
}

void maior_menor(int n,int * v){
	int maior = v[0], menor = v[0];
	int i;
	for(i=0;i<n;i++){
		if(maior < v[i]){
			maior = v[i];
		}
		if(menor > v[i]){
			menor = v[i];
		}
	}
	
	printf("maior: %d, menor: %d ", maior, menor);
}

int produto_escalar(int * x, int *  y, int n){
	int i;
	int produto = 0;
	for(i=0;i<n;i++){
		produto += x[i]*y[i];
	}
	
	return produto;
	
}

void ocorrencias(float * x, int n){
	int i, j, count=1;
	float temp;
	for(i=0;i<n;i++){
		for(j=i-1;j>=0 && x[i] != x[j] ;j--){
		}
		if(x[i] != x[j]){
			temp = x[i];
			for(j=i+1;j<n;j++){
				if(temp == x[j]){
					count++;
				}
			}	
			printf("%f - %d\n", x[i], count);
			count = 1;
		}
	}
}

void ordenacao(int * x, int * y, int n){
	
	int * vetor = (int *) malloc(sizeof(int) * 2 * n);
	
	int i, j=0, k=0;
	
	for(i=0;i<2*n;i++){
		if(j > (n-1) ){
			vetor[i] = y[k];
			k++;
		}else if(k > (n-1) ){
			vetor[i] = x[j];
			j++;
		}else if(x[j] < y[k]){
			vetor[i] = x[j];
			j++;
		}else{
			vetor[i] = y[k];
			k++;
		}
	}
	
	for(i=0;i<2*n;i++){
		printf("%d\n", vetor[i]);
	}
	
}

void segmentos(int * x, int n){
	
	int tam = n % 2 == 0 ? n/2 : (n+1)/2;
	
	int j, m, i, k, count = 0;
	
	for(m=1; m<tam; m++){
		for(i=0; i < n;i++){
			count =0;
			for(k=i;k<i+m;k++){
				if(x[k] == x[k+m]){
					count++;
				}
			}
			if(count == m){
				printf("i=%d m=%d", i, m);
			}
		}
	}
	
	
}

int main(){
	int vetor[] = {7, 9, 8, 5, 4, 5, 4, 8, 6};
	
	segmentos(vetor, 9);
	

	return 0;
}
