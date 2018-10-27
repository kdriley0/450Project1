/*
 ============================================================================
 Name        :Project 1 for 450
 Author      : Kevin Riley
 Version     :1.0
 
 ============================================================================
 */

/*
interesting things
int *array = malloc(20 *sizeOf(int));
free(array);



*/
#include <stdio.h>
#include <stdlib.h>

struct firstArr{
	int row[5]
	

	};

//declaring  global variables
FILE *data;


/* -----------------------main fcn ------------------------------  */
int main(void) {
getData();

return 0;
}

void getData(){
int ch;
int i=0;
FILE *fp;
fp=fopen("C:\\data\\COSC450_P1_Data.txt", "r");
ch = getc(fp);
	while(ch != EOF ){
	putchar(ch);
	ch = getc(fp);
	i++;
	}
	printf(" the numbers are \n");
	printf("%d", i);
fclose(fp);

}


