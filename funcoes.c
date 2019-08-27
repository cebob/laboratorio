#include <stdlib.h>
#include <stdio.h>

int soma_perfeitos(int x, int y){
	int soma = 0, soma_num= 0;	
	
	int i;
	while(x<=y){
		i = 1;
		while(i<x){
			if(x%i==0){
				soma_num += i;
			}
			i++;
		}
		if(soma_num == x){
			soma += x;
		}
		soma_num = 0;
		x++;
	}
	
	return soma;
}

int primos(int y){
	int x = 2, count = 0;
	while(x<=y){
		int i = 1;
		while(i<=x){
			if(x%i == 0){
				count ++;
				break;
			}
			i++;
		}
		
		if(count==2){
			printf("%d   ", x);
		}
		
		count = 0;
		
		x++;
	}
	
}

void primos_gemeos(int y){
	int x = 2, count = 0, k;
	printf("Digite um numero\n");
	scanf("%d", &y);
	while(x<=y){
		int i = 1;
		while(i<=x){
			if(x%i == 0){
				count++;
				if(count>2){
					break;
				}
			}
			i++;
		}
		
		if(count==2){
			k = x+2;
			i = 1;
			count = 0; 
			while(i<=k){
				if(k%i == 0){
					count++;
					if(count>2){
						break;
					}
				}
				i++;
			}
			
			if(count == 2){
				
				printf("%d - %d\n", x, k);
			}
		}
		
		count = 0;
		
		x++;
	}
}

void fibonacci(int num){
	int a = 0, b = 1 , i =0;
	
	while(i<num){
		printf("%d  ", a);
		b = a + b;
		a = b - a;
		i++;
	}
	
}

int main(){
	int num,a = 0, b = 1 , i =0;
	printf("Digite um numero\n");
	scanf("%d", &num);
	
	fibonacci(num);
	
	return 0;
}
