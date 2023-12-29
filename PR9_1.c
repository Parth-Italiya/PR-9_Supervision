/*Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
output of even file:
50
52
54
56
58
60
62
64
66
68
70
output of odd file:
51
53
55
57
59
61
63
65
67
69

*/

#include<stdio.h>

void main(){
	int i;
	FILE *even,*odd;
	
	even=fopen("EVEN.txt","w");
	odd=fopen("ODD.txt","w");
	
	if(even==NULL || odd==NULL){
		printf("sorry you can't open the file");
	}
	for(i=50; i<=70; i++){
		if(i%2==0){
			fprintf(even,"%d\n",i);
			}else{
		
				fprintf(odd,"%d\n",i);
			}
		}
			
	}


