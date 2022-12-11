#include<stdio.h>

int fact(int a){
	
	if (a>=1){
		
		return a*fact(a-1);
	}
	
	else{
	
	 return 1;
}

}

main(){
	
	int q;
	
	printf("Enter value :- ");
	scanf("%i",&q);
	
	int z = fact(q);
	
	printf("Eactorial :- %i",z);
	
}
