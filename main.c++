
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>

#include <typeinfo>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#include "mainHeader.h"
using namespace std;

int main(int argc, char* argv[]){
	char data[1000] , temp[300], name[30],temp3[100];
	ifstream infile { argv[1]};
	std::string file_contents { istreambuf_iterator<char>(infile), istreambuf_iterator<char>() };
		//cout << typeid(file_contents).name() <<endl;
	
	int len = file_contents.size(),line=1, len1=0,q,t1,t2,t3,t4,t5=-1,s=0,o,o1=-1,u=0,v=0;
    file_contents[len]='\n';
    file_contents[len+1]='\0';
    len+=1;
	int i=0,j=0;
	if(file_contents[0]=='\n'){
		line+=1;
	}
	for(i=0;i<len;i++){

		if(file_contents[i]!='\n'){

			
			temp[u]=file_contents[i];
			u++;}

		else if(file_contents[i]=='\n' and i!=0){
			//cout << "temp "<<temp <<endl;
			int k=	comment_identifier(temp);
		
				//if (k!=-1){
				 //cout << "comment at <line :" <<line<< " position :"<< k << ">"<<endl;}
		  		
				 if(k>-1){
				 	for(v=0;v<len-k;v++){
				 		temp[k-1+v]='\0';
				 	}
				 	
				 }
				 //cout <<temp;
			    
			     len1 = strlen(temp);
			     int status[len1];

			     for(q=0;q<len1;q++){
			     	t1=-1;
			     	char temp2[2]={temp[q],'\0'};

			     	t1=integer_identifier(temp2);
			     	//cout << t1;
			     	if(t1>0) {t5=t1;}
			     	t1=identifier_identifier(temp2);
			     	//cout << t1;
			     	if(t1>0) {t5=t1;}
			     	t1=binop_identifier(temp2);
			     	//cout << t1;
			     	if(t1>0) {t5=t1;}
			     	t1=seperators_identifier(temp2);
			     	//cout << t1;
			     	if(t1>0) {t5=t1;}
			     	t1=blankspace_identifier(temp2);
			     	if(t1>0){t5=t1;}
			        
			        
			     	status[q]=t5;
			     	temp3[q]=temp2[0];
			     	t5 = -1;



			     }
			     	int l ,m=0,x=0,tempk,y=0;
			     	char temp5[15];
			    for(s=0;s<len1;s++){
			    	o=status[s];

			    	if(o==2 and o1!=2 and o1!=3){l=s;
			    					    		tempk=o;
			    					    			while(o==2 and x!=len1-s){
			    					    				
			    					    				temp5[m]=temp3[l];
			    					    				m++;
			    					    				l++;
			    					    				o=status[l];
			    					    				x++;
			    					    			}

			    		
			    		cout << "IC: "<<temp5<< " <line: " << line << " position: "<< s+1<<">"<<endl;
			    					 	for(y=0;y<len1-s;y++){
				 											temp5[y]='\0';
				 						}				    			

				 						o=tempk;

			    				         x=0;
			    				         m=0;
}
			    	
			    	if(o==3 and o1!=3){
			    								l=s;
			    					    		tempk=o;
			    					    			while(((o==3)|(o==2) )and x!=len1-s){
			    					    				
			    					    				temp5[m]=temp3[l];
			    					    				m++;
			    					    				l++;
			    					    				o=status[l];
			    					    				x++;
			    					    			}
	
			    		cout << "ID: "<< temp5<<" <line: " << line << " position: " <<s+1<<">"<<endl;
			    				    					 	for(y=0;y<len1-s;y++){
				 											temp5[y]='\0';
				 										}	
			    					    			o=tempk;
			    					    			x=0;
			    					    			m=0;
			    	}
			    	if(o==4 ){
			    		cout << "BINOP: "<<temp3[s]<<" <line: " << line << " position: "<< s+1<<">"<<endl;
			    		
			    	}
			    	if(o==5){
			    		cout << "SEPERATOR: "<<temp3[s]<<" <line: " << line << " position: " <<s+1<<">"<<endl;
			    		
			    	}
			    	if(o==-1){
			    		cout << "NO TOKEN: "<<temp3[s]<<" <line: " << line <<"position: " <<s+1<<">"<<endl;
			    	}

 					o1=o;
			    }

			   		for(v=0;v<len1;v++){
				 		temp[v]='\0';
				 	}
			   			u=0;
		 				line+=1;


			}
		
	

}

		cout<<"End of file: "<<endl;
	}


