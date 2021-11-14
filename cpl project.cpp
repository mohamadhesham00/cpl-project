#include <stdio.h>
#include <stdlib.h>
	int x=0;
	// 1st array for the input sentence
  	char sentence[1000] ;
  	// for turning charatcters into numbers
  	int number [1000] ;
  	//random for using it in encryption or decryption
  	int random [30] ={1,5,9,7,6,4,8,3,17,4,20,5,12,14,6,4,9,10,18,73,27,67,12,38,57,17,68,27,94,69} ;
	//variable i for arrays
	// variable h for asking encryption or dycryption
	int i=0,h;
	// num of elemnts for calculating number if elements in array
	int num_of_elemnts =0;
void encryption(){
	/*for loop 1-for turning charatcters into numbers
	 2- adding the random number from array random 
	 3- take it back to character
	 4-print the encryption */
	for (i=0;i<num_of_elemnts;i++){
		number[i] =(int) sentence[i] ;
		number [i] +=random[x] ;
		sentence[i] =(char)number[i] ;
		x++;
		if (x>30){
			x=0;
		}
}printf("the encryption is:  %s\n \n" ,sentence);
x=0;
}  	
void decryption(){
	//same as encrypting but subrtackung number from array random
	for (i=0;i<num_of_elemnts;i++){
		number[i] =(int) sentence[i] ;
		number [i] -=random[x] ;
		sentence[i] =(char)number[i] ;
		x++;
		if (x>30){
			x=0;
		}
}printf(" the decryption is:  %s\n \n" ,sentence);
x=0;
}
int main(){
		// variable array for keeping the program running
		char again='y';
		// becuase spaces with scanf will ruin the program
		printf("don't use spaces\n");
		while(again=='y'||again=='Y')
		{
		// inputing the sentence
		printf("enter a sentence:  ");
		scanf("%s",sentence);
		//make sure sentence isn't done
		while ( sentence[num_of_elemnts] != '\0'){
			num_of_elemnts ++ ;
		}
		
	printf("for encryption press 1:  \n for decryption press 2: ");
	scanf("%d",&h);
	if (h==1){
		encryption();
		}
			
			
	else if (h==2){
		decryption();
		
	}	
	else{
	//if the user inputs a number but 1 or 2 a message shows 
	while(h!=1||h!=2){
		printf("enter 1 or 2: ");
		scanf("%d",&h);
	}

	}

		}
			
    return 0 ;
	}
