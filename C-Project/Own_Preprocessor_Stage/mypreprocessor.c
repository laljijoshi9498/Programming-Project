




#include "header.h"


main(int argc,char **argv)
{
FILE *fptr=0;
char string[500],*pointer=0,character=0,character1=0;
int filelength=0;


	if(argc != 2)
	{
		printf("Usage : Give two argument 1.executablefile 2.filname.c\n");
		return;
	}
	else
	{
		
	CheckSourceFile(argv[1]);
	
		fptr = fopen(argv[1],"r+");
		if(fptr == NULL)
		{
			printf("File not present\n");
			return;
		}
		else
		{
			
			fseek(fptr,0,SEEK_END);
			filelength = ftell(fptr);
			rewind(fptr);			
			
			pointer = malloc(sizeof(filelength+1));
			
			int temp=0;
			while((character = fgetc(fptr)) != EOF)
			{
								
				if(character == '/')
				{
					pointer[temp++]= ' ';
					//fseek(fptr,-1,SEEK_CUR);
					while((character1 = fgetc(fptr)))
					{
						if(character1 !=)
						break;

						pointer[temp++]= ' ';
					}
					//pointer[temp] = '\n';
				}
				else
				{
					pointer[temp++] = character;
				}			
			}
			pointer[temp] = '\0';			
			rewind(fptr);

			for(temp=0;pointer[temp];temp++)
			fputc(pointer[temp],fptr);	
		}
					

	
	}

}


