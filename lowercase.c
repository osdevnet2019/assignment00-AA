int main()
{
	char c;
	
	while(c != '\n') {
		read(0, &c, 1);
		
		if (c >= 65 && c <= 90){
			c += 32;
		}
		
		write(1, &c, 1);
	}	
	
	return 0;
}