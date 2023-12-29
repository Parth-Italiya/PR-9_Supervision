/*
Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
Output:
Enter the amount of student : 2
Enter the 2 student Details

Enter roll number of the student : 1
Enter the student name : aman
enter the chemistry marks : 80
Enter the mathemetics marks : 87
Enter the physics marks : 90

Enter roll number of the student : 2
Enter the student name : amit
enter the chemistry marks : 89
Enter the mathemetics marks : 85
Enter the physics marks : 86

 Details of all student
Roll : 1
Name : aman (1)
Chemistry : 80
Mathemetics : 87
Physics: 90
Total marks : 257 / 300
Total Percent : 85.0000002
Roll : 2
Name : amit (2)
Chemistry : 89
Mathemetics : 85
Physics: 86
Total marks : 260 / 300
Total Percent : 86.0000002

*/
#include<stdio.h>


	struct student{

	int id;
	char name[200];
	int chemistry;
	int mathematics;
	int physics;	
	};
	
 main()
{
	int i,n;
	printf("Enter the amount of student : ");
	scanf("%d",&n);
	
	  struct student data[n];
	  
	  printf("Enter the %d student Details \n \n",n);
	 
	  for(i=0; i<n; i++){
	  	printf("Enter roll number of the student : ");
		scanf("%d",&data[i].id);
		printf("Enter the student name : ");
		scanf("%s",&data[i].name);
    	printf("enter the chemistry marks : ");
		scanf("%d",&data[i].chemistry);	   	
		printf("Enter the mathemetics marks : ");
		scanf("%d",&data[i].mathematics);	   	
		printf("Enter the physics marks : ");
		scanf("%d",&data[i].physics);	   		  
		printf("\n");
	}

    printf(" Details of all student\n");
	int total=0;
	float percent=0;

    for(i=0; i<n; i++){
        printf("Roll : %d\n",data[i].id);
		 printf("Name : %s (%d)\n",data[i].name,data[i].id);
        printf("Chemistry : %d\n",data[i].chemistry);
        printf("Mathemetics : %d\n",data[i].mathematics);
        printf("Physics: %d\n",data[i].physics);
        printf("Total marks : %d / %d\n",(data[i].chemistry+data[i].mathematics+data[i].physics),300);
        
        total = (data[i].chemistry+data[i].mathematics+data[i].physics);
        percent = total*100/300;
        printf("Total Percent : %f2 \n",percent);
       }
 
}


