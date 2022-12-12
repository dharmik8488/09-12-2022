#include<stdio.h>

void divide(int a){
	
	if(a%3==0 && a%5==0){
		
		printf("Both is divisble");
		
	}
	else if(a%3==0){
		printf("3 is divisble");
	}
	else if(a%5==0){
		printf("5 is divisble");
		
	}
	else{
		
		printf("Not divisible");
	}
}

main(){
	
	int z;
	
	printf("Enter value :- ");
	scanf("%i",&z);
	
	divide(z);

}
	
