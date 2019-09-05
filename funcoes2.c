#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int fat_rec(int n){
	
	if(n<=1){
		return 1;
	}
	
	return n * fat_rec(n-1);
}


int combinacao(int n, int m){
	
	return fat_rec(n)/(fat_rec(m) * fat_rec(n-m));
	
}

int fibonacci(int n){
	
	int a = 0, b=1,i,num;
	for(i=0; i<=n;i++){
		num = a;
		b = b+a;
		a = b-a;
	}
	
	return num;

}

int fibonacci_rec(int n){
	
	if(n!=0){
		return fibonacci_rec(n-1);
	}
	
	return fibonacci_rec(n)+fibonacci(n-1);
	
	
}

void pascal(int k){
	
	int i,j;
	for(i=0; i<=k; i++){
		for(j=0;j<=i;j++){
			printf("%d   ",combinacao(i,j));
		}	
		printf("\n");
	}
	
}

int qtd_dig(int n){
	int count = 0;
	while(n>0){
		n = n/10;
		count ++;
	}
	return count;
}

int	ocorrencias(int n, int d){
	
	int mod, count = 0;
	while(n>0){
		mod = n%10;
		n = n/10;
		if(mod == d){
			count++;
		}
	}
	
	return count;
	
}

int permutacao(int x, int y){
	
	int i, qtd_x, qtd_y, count = 0;
	for(i=1;i<=9;i++){
		qtd_x = ocorrencias(x, i);
		qtd_y = ocorrencias(y, i);
		if(qtd_x == qtd_y){
			count++;
		}else{
			count =0;
			break;
		}
	}
	
	if(count>0){
		return 1;
	}else{
		return 0;
	}
	
}

int sufixo(int x, int y){
	
	int mod, count = 0, divisor, aux = y;
	while(aux>0){
		aux = aux/10;
		count++;
	}
	
	divisor = pow(10,count);
	
	mod = x%divisor;
	
	if(mod==y){
		return 1;
	}
	
	return 0;	
	
}

int segmento(int x, int y){
	
	if(sufixo(x,y)){
		return 1;
	}
	
	
	
}

void palindromo(int x){
	
	int res,divisor, count = 0, aux = x, novo_num=0;
	while(aux>0){
		aux = aux/10;
		count++;
	}
	
	divisor = pow(10, count);
	
	
	while(x>0 && divisor>0){
		res = x/divisor;
		novo_num = novo_num + res*count;
		divisor = divisor/10;
		x = x%10;
	}
	
	printf("\nPalindromo :%d\n", novo_num);
	
}


int main(){
	
	clock_t tempo_inicial, tempo_final;
	
	tempo_inicial = clock();
	
	palindromo(1234);
	
	tempo_final = clock();
	
	
	printf("Tempo gasto: %f ms\n\n", 1000*(double)(tempo_final-tempo_inicial)/(double)(CLOCKS_PER_SEC));
	return 0;
}
