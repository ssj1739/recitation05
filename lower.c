#include <stdio.h>
#include <string.h>

char* toLowerCase(char* str)
{
	// TO DO: Your code here
	return "";
}

int main()
{
	char* str = "WE CoulD HAve ChaNgeD ThE WorLd";

	if(strcmp(toLowerCase(str), "we could have changed the world") == 0)
	{
		printf("Correct! You can now move to the next exercise.\n");
	}
	else
	{
		printf("Incorrect result.\n");
	}

	return 0;
}