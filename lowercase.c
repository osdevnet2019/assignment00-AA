#include<stdio.h>

int main()
{
	char c;
	
	while(c != EOF) {
		c = getchar(); 
		
		if (c >= 65 && c <= 90){
			c += 32;
		}
		write(1, &c, 1);
	}	
	
	return 0;
}