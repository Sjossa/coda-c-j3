#include <stdlib.h>
#include <stdio.h>
int main(){
	char premier [100];
	int  milieux = 42;
	int age;

	printf("ecrivez un nombre\n");
	scanf("%d", &age);
		if(age >= milieux){

		printf("le nombre est egal ou superieur a 42\n");
		exit(0);
		}else{
		printf("le nombre est inferieur a 42\n");
		exit(0);
			}

}
