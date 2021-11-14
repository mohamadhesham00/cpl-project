#include <stdio.h>
#include <stdlib.h>

  	char sentence[1000] ;
  	int number [1000] ;
  	int random [20] ={1,5,9,7,6,4,8,3,17,4,20,5,12,14,6,8,9,10} ;
	int i=0,J=0,h;
	int num_of_elemnts =0;
void encryption(){
	for (i=0;i<num_of_elemnts;i++){
		number[i] =(int) sentence[i] ;
		number [i] +=random[i] ;
		sentence[i] =(char)number[i] ;
}printf("the encryption is %s" ,sentence);
}  	
void decryption(){
	for (i=0;i<num_of_elemnts;i++){
		number[i] =(int) sentence[i] ;
		number [i] -=random[i] ;
		sentence[i] =(char)number[i] ;
	
}printf("\n the decryption is %s" ,sentence);
}
int main(){
	
	
    return 0 ;
	}
