#include<stdio.h>
#include<string.h>

#define ROLLNUMBERWISE 1
#define NAMEWISE 2
#define MARKWISE 3
#define MAXIMUMSTUDENT 5

/* structure */
struct Student
{
	signed int RollNo;
	signed char Name[50];
	float Mark;
}Variable[MAXIMUMSTUDENT],Var;

int element,temp1,temp2;


/* function declaration */
int menu(void);
void scan_student_data(void);
void print_student_data(void);
void short_rollnumber_wise(void);
void short_name_wise(void);
void short_mark_wise(void);

main()
{
	scan_student_data();

	print_student_data();

	switch(menu())
	{
		case ROLLNUMBERWISE : short_rollnumber_wise();
					print_student_data();
					break;

		case NAMEWISE : short_name_wise();
				print_student_data();
					break;

		case MARKWISE : short_mark_wise();
				print_student_data();
					break;

		default : printf("Option not available\n");
				break;
	}
	
}

/* short mark wise */
void short_mark_wise(void)
{

	element = (sizeof(Variable))/(sizeof(Variable[0]));
	
	for(temp1=0;temp1<element;temp1++)
	{
		for(temp2=temp1+1;temp2<element;temp2++)
		{
			if((Variable[temp1].Mark) > (Variable[temp2].Mark))
			{
				Var = Variable[temp1];
				Variable[temp1] = Variable[temp2];
				Variable[temp2] = Var;
			}
		}			
	}
}

/* short name wise function */
void short_name_wise(void)
{
	element = (sizeof(Variable))/(sizeof(Variable[0]));
	
	for(temp1=0;temp1<element;temp1++)
	{
		for(temp2=temp1+1;temp2<element;temp2++)
		{
			if(strcmp(Variable[temp1].Name,Variable[temp2].Name) >= 1)
			{
				Var = Variable[temp1];
				Variable[temp1] = Variable[temp2];
				Variable[temp2] = Var;
			}
		}			
	}
}


/* menu function */
int menu(void)
{
	int option=0;

	printf("Enter option\n1.Roll number wise shorting\n2.Name wise shorting\n3.Mark wise shorting\n");
	scanf("%d",&option);
	
}

/* scan data function */
void scan_student_data(void)
{	
	element = (sizeof(Variable))/(sizeof(Variable[0]));

	for(temp1=0;temp1<element;temp1++)
	{
		printf("Enter first Student data\n1_RollNo\n2_Name\n3_Mark\n");
		scanf("%d",&Variable[temp1].RollNo);
		scanf(" %[^\n]",Variable[temp1].Name);
		scanf("%f",&Variable[temp1].Mark);		
	}
	
}


/* print data function */
void print_student_data(void)
{
	element = sizeof(Variable)/sizeof(Variable[0]);
	
	printf("RollNo\tName\tMark\n");
	for(temp1=0;temp1<element;temp1++)
	{
		printf("%d\t%s\t%f\n",Variable[temp1].RollNo,Variable[temp1].Name,Variable[temp1].Mark);
	}

}




/* short roll number wise */
void short_rollnumber_wise(void)
{
	element =  sizeof(Variable)/sizeof(Variable[0]);

	for(temp1=0;temp1<element;temp1++)
	{
		for(temp2=temp1+1;temp2<element;temp2++)
		{
			if((Variable[temp1].RollNo) > (Variable[temp2].RollNo))
			{
				Var = Variable[temp1];
				Variable[temp1] = Variable[temp2];
				Variable[temp2] = Var;
			}
		}			
	}
}

