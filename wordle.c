#include <stdio.h>
#include "color.h"
#include "ctype.h"
#include "utils.h"
#include <time.h>


void printNumbers(int nums[], int len){
	for (int i = 0; i < len; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}

int checkcorrect(int arr[]) {
	for (int i=0; i<5; i++) {
		if (arr[i] != 2) {
			return 0;
		}
	}
	return 1;
}



int main() {

	char* correctword = "smile";

	for (int i = 0; i < 6; i++) {
		printf("\n");
		char* guess;
		printf("GUESS A 5 LETTER WORD\n");
		scanf("%s",guess);
		int arr[5];
		generatearrfromword(guess,correctword,arr);
		feedback(arr, guess);
		if (checkcorrect(arr)) {
			printf("\ncorrect! %d/6\n\n\n",i+1);
			break;
		}

	}
	return 0;
}



