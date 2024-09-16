#include <stdio.h>
int main(){
	int a[90],freq[80],count;
	int n,j,k,i;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	for(i=0; i<n; i++){
		count=1;
		for(j=i+1; j<n; j++){
			if(a[i]==a[j]){
				count++;
				freq[j]=0;
			}
			
		}
		if(freq[i]!=0){
				freq[i]=count;
			}
	}
	for(i=0; i<n; i++){
		if(freq[i]!=0){
			printf("%d %d\n",a[i],freq[i]);
		}
	}
}
