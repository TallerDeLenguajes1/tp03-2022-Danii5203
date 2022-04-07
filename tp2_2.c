#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 5

int main(){
	
	char *vector[N];
	char *Buff;
	
	Buff = (char *) malloc(100*sizeof(char));
	
	printf("Cargamos ----------------------------\n");
	for(int i=0; i<N; i++){
		printf("Ingrese un nombre: ");
		gets(Buff);
		*(vector+i) = (char *) malloc((strlen(Buff)+1)*sizeof(char));
		strcpy(*(vector+i), Buff);
	}
	
	printf("\nMostramos ----------------------------\n");
	for(int i=0; i<N; i++){
		puts(*(vector+i));
		free(*(vector+i));
	}
	free(Buff);
	
	return 0;
}
