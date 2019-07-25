#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*ft;
	fp = fopen("Code.txt","r");
	ft =fopen("Code2.txt","w");
	char ch;
	
	while(1)
	{
		ch = fgetc(fp);
		
		if (ch == EOF)
		  break;
		if (ch == '\n')
		  fputs("",ft);
		else if(ch=='0'||ch =='g')
		 {
			 fputc(ch,ft);
		   fputs(",",ft);
		 }
		else
		  fputc(ch,ft);
	}
	fclose(fp);
	return 0;
}
