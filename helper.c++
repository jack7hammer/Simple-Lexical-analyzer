
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <ctype.h>
#include "mainHeader.h"
using namespace std;

int comment_identifier(char *string){

	int len=strlen(string);
	int reset=1;
	int comment=0,counter=0,i=0;
	char c;

	for(i=0;i<len;i++){
						c=string[i];
						
						if (c == '/'){
									   if (reset==1){
												 	counter=0;
													 }
										
										counter= counter+1;
										reset=0;
									}
						else{
							reset =1;
							counter=0;
							}
					
					if (counter==2){
							//printf("inside counter2");
							comment= 1;
							return i;
						}
					else{
						continue;
					}

					
		}
		return -1;
}


				
int integer_identifier(char *string){
	 int len=strlen(string),i=0,counter=0;
	 for(i=0;i<len;i++){
	 	if (isalpha(string[i])){
	 		return -1;}
	 	if (isdigit(string[i])){
	 			counter = counter+1;
	 		}
	 	}
	 
	if (counter == len){
		return 2;}
	else {return -1;}
	}

int identifier_identifier(char *string){
	 int len=strlen(string),i=0,counter=0,k;
	 k=isdigit(string[0]);
	 if (len==0) return -1;
	 if (k==1){
	 	return -1;
	 }
	 else{
		 for(i=0;i<len;i++){
			 	if( isalnum(string[i])){
			 		counter=counter+1;
			 	}
			 	else {return -1;}
		 }

		}
		return 3;
	}
int binop_identifier(char *string){
	int len=strlen(string),i=0,counter=0,j=0;
	 for(i=0;i<len;i++){	
		for (j=0;j<6;j++){
			if(string[i]==operators[j]){
				return 4;
			}
		}
	}
	 return -1;	
}

int seperators_identifier(char *string){
	int len=strlen(string),i=0,counter=0,j=0;
	 for(i=0;i<len;i++){	
		for (j=0;j<6;j++){
			if(string[i]==seperators[j]){
				return 5;
			}
		}
	}
	 return -1;	
}
int blankspace_identifier(char *string){
	int len=strlen(string),i=0,j=0;
	for(i=0;i<len;i++){
		if ((string[i]==' ') | (string[i]=='\t') | (string[i]=='\n')| (string[i]=='\0')){return 6;}
		else return -1;

	}
}
