

#include "header.h"


void CheckSourceFile(char *string)
{
	while(*string)
	{
		if((*string) != '.')
		{
			string++;
		}
		else
		{
			string++;
			if((*string) == 'c')
			{
				printf("Ok Source file is .c\n");
			}
		}
	}
}
