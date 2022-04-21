#include <stdio.h>

/* Iterate through and uwuify string */

/* Have to include arg counter smh */
void main(int argc, char *argv[]){
	char *bruh = argv[1];
	int i;
	int tmp;
	i = 0;
	while (*(bruh +i) != '\0'){
		tmp = *(bruh + i);
		if (tmp == 'r'){
			tmp = 'w';
		} else if (tmp == 'l'){
			tmp = 'w';
		}
		printf("%c", tmp);
		i++;
	}
	printf("\n");
}
