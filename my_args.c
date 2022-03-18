#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char *p = argv;
	
	for (int i=0; i<argc; i++) {
		
		
		while (*p != '\0') {
			
			
			printf("%c", *p);
			
			p = p + 1;
		}
		
		printf(" ");
		p = p + 1;
	}
	
	return 0;
}