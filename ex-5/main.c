#include <stdlib.h>
#include <stdio.h>

int main(){

char  symbole;
int numero;
	printf("choisisez entre + et -\n");

	scanf("%c",&symbole);

	printf("choisisez un nombre differend de 0\n");

	scanf("%d",&numero);

	int count = 0;

	if(symbole == 43){

	while(count <= numero){

	printf("%d\n",count);

	count = count + 1;}

	}else if(symbole == 45){

	while(numero > count) {

	printf("%d\n",numero);
	numero = numero - 1;

}

}else{
	printf(" vous avez entrez un mauvaus caractéres");
}


}


