#include <stdio.h>
 int main() {
 	int h,payment,op;
 	do {
 	printf("\tWelcome to BBU Center\n");
 	printf("=========================================\n");
 	printf("[1]. Bycicle ");
 	printf("\t[2]. Moto");
 	printf("\t[3]. Car\n");
 	printf("=========================================\n");
 	
 	printf("Please Select one option = ");scanf("%d",&op);
 	printf("Please input total hour  = ");scanf("%d",&h);
 	 switch(op){
 	 	case 1 :{
 	 		printf("\t\t(Bycicle)\n");
 	 		if(h>=1 && h<=5){
 	 	         payment = h*100;
	           }else if(h>5 && h<=12){
	  	        payment = h*200;
	          }else if(h>12 && h<=24){
	  	        payment = h*300;
	  }
			break;
		  }
		  case 2:{
		  	printf("\t\t(Moto)\n");
		     if(h>=1 && h<=5){
 	 	         payment = h*200;
	           }else if(h>5 && h<=12){
	  	        payment = h*300;
	          }else if(h>12 && h<=24){
	  	        payment = h*400;
	  }
		   } 
			break;
		  case 3:{
		  	printf("\t\t(Car)\n");
		  	if(h>=1 && h<=5){
 	 	         payment = h*300;
	           }else if(h>5 && h<=12){
	  	        payment = h*400;
	          }else if(h>12 && h<=24){
	  	        payment = h*500;
		  }
			break;
	  }
		  }
        printf("============Display Information==========\n");
        printf("Vehicle is no	= %d hour\n",h);
        printf("Your Payment is	= %d Reils\n",payment);
    }while (op!=0);
 }

