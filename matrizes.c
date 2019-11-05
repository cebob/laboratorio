#include <stdio.h>
#include <stdlib.h>

float** transposta(int m, int n, float **matriz){
	int i, j;
	
	float ** mat;
	mat = (float**) malloc(n* sizeof(float*));
	for(i=0;i<n;i++){
		mat[i] = (float*) malloc(m*sizeof(float));
	}
	
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			mat[j][i] = matriz[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%f  ", mat[i][j]);
		}
		puts("\n");
	}
	
	return mat;
	
}

void produto(int m, int p, int n, float ** m1, float ** m2){
	float ** mat;
	mat = (float**) malloc(m* sizeof(float*));
	
	int i,j,k;
	for(i=0;i<m;i++){
		mat[i] = (float*) malloc(p*sizeof(float));
	}
	
	float aux = 0;

	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			for(k=0;k<n;k++){
				aux+=m1[i][k] * m2[k][j];
			}
			mat[i][j] = aux;
			aux=0;
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			printf("%f  ", mat[i][j]);
		}
		puts("\n");
	}
	
}

int main(){
	int n,m,p;
	scanf("%d %d %d",&m,&n,&p);
	
	float ** mat;
	mat = (float**) malloc(m* sizeof(float*));
	float ** mat2;
	mat2 = (float**) malloc(n* sizeof(float*));
	
	int i,j;
	for(i=0;i<m;i++){
		mat[i] = (float*) malloc(n*sizeof(float));
	}
	for(i=0;i<n;i++){
		mat2[i] = (float*) malloc(p*sizeof(float));
	}
	
	puts("Matriz 1\n");
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			printf("Digite\n");
			scanf("%f", &mat[i][j]);
		}
	}
	
	puts("Matriz 2\n");
	
	for(i=0; i<n; i++){
		for(j=0;j<p;j++){
			printf("Digite\n");
			scanf("%f", &mat2[i][j]);
		}
	}
	
	produto(m, p, n, mat, mat2);
	
	return 0;
}
