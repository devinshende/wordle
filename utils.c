#include <stdio.h>
#include "color.h"
#include "ctype.h"
#include <string.h>
 
// 0 = wrong letter
// 1 = wrong place
// 2 = right

void feedback(int results [], char word []) {
	for (int i=0; i < 5; i++){
		reset();
		if (results[i] == 0) {
			reset();
			printf("%c",toupper(word[i]));
		}
		if (results[i] == 1) {
			yellow();
			printf("%c",toupper(word[i]));
		}
		if (results[i] == 2) {
			green();
			printf("%c",toupper(word[i]));
		}
	}
	printf("\n");
	reset();
}

void generatearrfromword(char input [], char correct[], int storeinto[]) {
	for (int i = 0; i < 5; i++){
		char* pos = strchr(correct, input[i]);
		if (pos == NULL){
			storeinto[i] = 0;
		}
		else if (input[i] == correct[i]) {
			storeinto[i] = 2;
		}
		else {
			storeinto[i] = 1;
		}
	}
}







