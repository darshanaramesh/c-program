#include <stdio.h>
int main(){
	int a[60];
	int b[90];
	int odd[90];
	int i,j,k=0,n,count=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		count=0;
		for(j=1; j<=a[i]; j++){
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			b[k++]=a[i];		
	}
}
	for(i=0; i<k; i++){
		printf("%d",b[i]);
	}
}
