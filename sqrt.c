/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
//main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
    if(strlen(argv[1])>0){
        for(int i=0;i<strlen(argv[1]);i++){
            if(i==0){
                if(argv[1][i]=='-')
                    continue;
            }
            if(!isdigit(argv[1][i])){
                printf("Input not a number\n");
                exit(-1);
            }
        }
    }
	int input = atoi(argv[1]);
    if(input>=0)
	    printf("Sqrt of %d is %f\n",input,sqrt(input));
    else
	    printf("Sqrt of %d is %fi\n",input,sqrt(-input));
    printf("End of program. Exiting\n");
	return(0);

} // end main

