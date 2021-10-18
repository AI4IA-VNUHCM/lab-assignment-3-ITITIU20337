/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex5(int arr[], int n){
	int i;
	int arrpos[n];
	int arrne[n];
	int countpos;
	int countne;

	for (i = 0; i <n ; i++) {
		if (arr[i]>0){
			arrpos[countpos]=arr[i];
			countpos++;
		}
		else{ 
			arrne[countne]=arr[i];
		    countne++;
		}
	}
	for (i = 0; i < countpos; i++) {
        printf("%d ", arrpos[i]);
		}

	for (i = 0; i < countne;i++){
		printf("%d ", arrne[i]);
	    }
} 

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex5(testcase, argc);
	
	return 0;
}
