#include <stdlib.h>
#include <stdio.h>

int main(){
	char premier [100];
	char symbol;

	printf("veuillez choisir un symbole +,-,/,* %%\n");
	scanf("%c",&symbol);
	if(symbol ==  43 ){
		printf("vous avez chosis le symbole +\n");
	}else if(symbol  == 45){

		printf("vous avez choisi le symbole -\n");
	}else if(symbol == 47){
		printf("vous avez choisi le symbole /\n");
	}else if(symbol == 42){
		printf(	"vous avez choisi le symbole *\n");
	}else if(symbol == 37){
		printf("vous avez choisi le symbole %%\n");}

} 
