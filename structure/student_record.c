/*
Name:Amrita
Date:10/02/2025
Description:program to Implement the student record using array of structures

*Implement an student record which will contain roll no., Name of student, subject marks, average and grade.
*Read number of students and declare array of structure with no.of students, then read number of subjects and n subject names.
*Read the particulars for each student.
	-Roll.no
	-Name.
	-Score of each subject
*Calculate the average. Based on that decide the grade.

Sample input and Sample output:
Enter no.of students : 2
Enter no.of subjects : 2
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Science
----------Enter the student datails-------------
Enter the student Roll no. : 1
Enter the student 1 name : Nandhu
Enter Maths mark : 99
Enter Science mark : 91
----------Enter the student datails-------------
Enter the student Roll no. : 2
Enter the student 2 name : Bindhu
Enter Maths mark : 88
Enter Science mark : 78
----Display Menu----
1. All student details
2. Particular student details
Enter your choice : 2

----Menu for Particular student----
1. Name.
2. Roll no.
Enter you choice : 1
Enter the name of the student : Nandhu
Roll No.   Name           Maths         Science       Average       Grade
  1       Nandhu           99             91            95            A
Do you want to continue to display(Y/y) : n
*/


#include <stdio.h>
#include <stdlib.h>

//function prototype for string compare
int my_strcmp(char *, char *);   
 //function prototype for grade 
char grade(float);                        

//structure declaration
struct student
{
    char name[30];
    int roll_num;
    int *mark;
};

int main()
{
    //declared the char variables
    char ch1, ch2;                 
    
    //used do-while loop for continue the process
    do                    
    {
	int stud = 0, subj = 0;
	char (*str)[30];
	int option, choice;
	float sum = 0, avg = 0;

	printf("Enter number of students: ");
	//reading the no. of students from user
	scanf("%d", &stud);                 
	
	printf("Enter number of subjects: ");
	//reading the no. of subjects from user
	scanf("%d", &subj);               

    //Dynamically memory allocated for subjects
	str = malloc (sizeof(*str) *subj); 
	
    //declared the structure variable
	struct student S[stud];     

    //iterating the no. of subjects over tyhe for loop
	for (int i = 0; i < subj; i++)   
	{
	    printf("Enter name of the Subject %d: ", i + 1 );
	     //reading subjects names from user
	    scanf("%s", str[i]);                   
	}

    //iterating the no. of students over the for loop
	for (int i = 0; i < stud; i++)   
	{
	    printf("-------------------------Enter students details--------------------\n");
	    printf("Enter the student %d Roll Number: ", i + 1);
	    fflush(stdin);
	    //reading students roll number from user
	    scanf("%d", &S[i].roll_num);   
	    
	    printf("Enter the student %d name: ", i + 1);
	    fflush(stdin);
	    //reading names from user
	    scanf("%s",S[i].name);       
	    
        //Dynamically memory allocated for storing marks
	    S[i].mark = (int *) malloc(sizeof(int) * subj);  

        //iterating the no. of subjects over the for loop
	    for (int j = 0; j < subj; j++)   
	    {
		printf("Enter the %s mark: ", str[j]);
		scanf("%d", &S[i].mark[j]);                
	    }
	}
	do
	{
	    printf("-----------------------DISPLAY MENU-----------------------------\n");
	    printf("1. All Student Details\n2. Particular Student Details\nEnter your option: ");
	    scanf("%d", &option);

        //validating the choice for partiular operation
	    switch (option)       
	    {
		case 1 :      
		    printf("Menu for All Student Details\n");
		    printf("Roll no\t\tName\t\t");

            //iterating the no. of subjects over the for loop
		    for(int j = 0; j < subj; j++)    
		    {
		    //printing the subjects 
			printf("\t\t%s\t\t", str[j]);     
		    }

		    printf("\t\tAverage\t\tGrade\n");
		    
            //iterating the no. of students over the for loop
		    for (int i = 0; i < stud; i++)   
		    {
			sum = 0;
			//iterating the no. of subjects over the for loop
			for (int j = 0; j < subj; j++)  
			{
			    //expression for adding marks for each student
			    sum = sum + S[i].mark[j];    
			}
			
			//display students roll num and name
			printf("%d\t\t%s\t\t", S[i].roll_num, S[i].name);  

            //iterating the no. of subjects over the for loop
			for (int j = 0; j < subj; j++)   
			{
			    //display marks of each subject
			    printf("\t\t%d\t\t", S[i].mark[j]);    
			}

            //expression for finding avarage marks for each student
			avg = sum / subj;              

            //display avg and grade
			printf("\t\t%g\t\t%c\n", avg, grade(avg));   
		    }

		    break;
		    
		case 2 :      
		    {	
			printf("-----------------------Menu for particular student--------------------\n");
			printf("1. Name\n2. Roll no\nEnter your choice: ");
			scanf("%d",&choice);      //reading the choice from user

			if (choice == 1)    //validating the condition choice is to be 1
			{
			    char stud_name[50];

			    // Prompt to read name of the student to display the detail of that particular student 
			    printf("Enter name of the student: ");
			    //reading the student name from user
			    scanf("%s",stud_name);   

			    sum = 0;
			    avg = 0;
			    int count = 0;
                
                //iterating the no. of students over the for loop
			    for (int i = 0; i < stud; i++)   
			    {
                
                 //function calling for compare 
				if ( my_strcmp (stud_name, S[i].name) == 0) 
				{
				    //incrementing the count
				    count++;                          
				    printf("Roll No\t\tName\t\t");

                    //iterating the no. of subjects over the for loop
				    for(int j = 0; j < subj; j++)   
				    {
					printf("%s\t   ", str[j]);
					//expression for adding marks for the student
					sum = sum + S[i].mark[j];   
				    }
				    
                     //exppression foor finding the avarage marks of the student
				    avg = sum / subj;            

				    printf("Average\t\tGrade\n");
				    printf("%d\t\t%s\t\t",S[i].roll_num, S[i].name);

                    //iterating the subjects over the for loop
				    for(int j = 0; j < subj; j++)    
				    {
					printf("%d\t\t",S[i].mark[j] );
				    }

				    printf("%g\t\t%c\n",avg,grade(avg));

				}
			    }
			     //validating the codition for count is to be 0
			    if (count == 0)    
			    { 
				printf("%s student detail is not available\n", stud_name);
			    }
			}
			//validating the choice is to be 2
			else if (choice == 2)    
			{
			    int number;
			    sum = 0;
			    avg = 0;                                  
			    printf("Enter the Student Roll Number: ");
			    //validating the choice is to be 2
			    scanf("%d",&number);          

			    for (int i = 0; i < stud; i++)
			    {
			    //validating the condition for comparing roll number
				if (number == S[i].roll_num)      
				{
				    printf("Roll No\t\tName\t\t");

				    for(int j = 0; j < subj; j++)
				    {
					printf("%s\t   ", str[j]);
					//expression for adding marks for student
					sum = sum + S[i].mark[j];  
				    }
				    //expression for finding the avarage marks of the student
				    avg = (sum / subj);     

				    printf("Average\t\tGrade\n");

				    printf("%d\t\t%s\t\t",S[i].roll_num, S[i].name);

				    for(int j = 0; j < subj; j++)
				    {
					printf("%d\t\t",S[i].mark[j] );
				    }

				    printf("%g\t\t%c\n",avg,grade(avg));
				}

			    }
			}
			else if (choice != 1 && choice != 2)       
			    printf("Enter valid choice\n");
		    }
		    break;

		default :
		    printf("Enter valid option \n");
	    }
	    
        //asks permisssion from user to repeat the operation
	    printf("Do you want to continue to display(y/Y): "); 
	     //reading the choice from user
	    scanf("\n%c",&ch2);                        
     
	}
	//validating the condition of user choice to repeat the display function 
	while (ch2 == 'Y' || ch2 == 'y');
	 //frees the memory
	free(str);         
	str = NULL;
	printf("Do you want to continue(y/Y): ");  
	//reading the choice from user
	scanf("\n%c",&ch1);                   

    } 
     //validating the condition of user choice for repetetion of reading student details
    while (ch1 == 'Y' || ch1 == 'y');     

    return 0;
}

//function definition for grade
char grade(float avg)     
{
    //validating the condition avg is to greater than 90
    if ( avg >= 90 )    
    {
	return 'A';    
    }
    //validating the condition avg is greater than 80 & lesser than 90
    else if (avg >= 80 && avg < 90)   
    {      
	return 'B';    
    }
    //validating the condition avg is greater than 70 & lesser than 80
    else if (avg >= 70 && avg < 80)    
    {
	return 'C';   
    }
    //validating the condition avg is greater than 60 & lesser than 70
    else if (avg >= 60 && avg < 70)    
    {
	return 'D';  
    }
    //validating the condition avg is greater than 50 & lesser than 60
    else if (avg >= 50 && avg < 60)    
    {
	return 'E';   
    }
    else
    {
	return 'F';    
    }
}

//function definition for my string compare
int my_strcmp( char *str1, char *str2)   
{
    //compare two strings with case insensitive 
    while ((*str1 && *str2) && (*str1 == *str2) || (*str1 - 32 == *str2) || (*str1 == *str2 - 32))
    {
	str1++;
	str2++;
    }
    //if both the strings are same means it will return 0 else ( >0 or <0) 
    return *str2 - *str1;    
}

