#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int i,j,k=0,rem;
	scanf("%d",&n);
	j=n;
	while(j>0){
		rem=j%10;
		k+=pow(rem,2);
		j/=10;
		if(j==1){
			printf("it is a happy number");
		}
		
		else{
		j=n;	
		rem=j%10;
		k+=pow(rem,2);
		j/=10;
		}
		
		
	}
	
	
}
