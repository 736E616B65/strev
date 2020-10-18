#include<stdio.h>
#include<string.h>

int strev(char cpStr[],char original[]){
	int len = strlen(original);
	
	for(int i = 0; i<len;i++)
		cpStr[i] = original[len - (i+1)];
		
	cpStr[len] = '\0';
}

int main(void){
	char hello[] = "Hello world";
	char reverseHello[strlen(hello)+1];
	
	strev(reverseHello,hello);
	printf("%s\n",reverseHello);
	return 0;
}
