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

void produto(int m, int p, int ** matriz){
	float ** mat;
	mat = (float**) malloc(m* sizeof(float*));
	
	int i,j;
	for(i=0;i<m;i++){
		mat[i] = (float*) malloc(p*sizeof(float));
	}
	
	// Continuar..		
	
}

int main(){
	int n,m;
	scanf("%d %d",&m,&n);
	
	float ** mat;
	mat = (float**) malloc(m* sizeof(float*));
	
	int i,j;
	for(i=0;i<m;i++){
		mat[i] = (float*) malloc(n*sizeof(float));
	}
	
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			printf("Digite\n");
			scanf("%f", &mat[i][j]);
		}
	}
	
	transposta(m, n, mat);
	
	return 0;
}
