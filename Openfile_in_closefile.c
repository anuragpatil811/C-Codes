#include<stdio.h>
#include<string.h>
int main()
{
	FILE *F1;
	char data[60] = "we are okay";
	F1 = fopen("Div.M" , "W");
	if(F1 == NULL)
	{
		printf("Div.M failed to open");
	}
	else{
		printf("Div.M is opened");
	}
	if(strlen(data) > 0)
	{
		fputs(data, F1);
		fputs("\n" , F1);
	}
	fclose(F1);
	printf("Data written to Div.M\n");
	printf("File is closed now");
}
