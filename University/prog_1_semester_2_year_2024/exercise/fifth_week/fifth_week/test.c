#include <stdio.h>
int main(){
	int i,j;
	int a;
	scanf("%d",&a);
	//we determine h, and then k, and then m, and then c, so that is clockwise
	//h is upper horizontal, k is right vertical, m is lower horizontal, c is left vertical
	int h=2; // salahnya cumn dsini. ni originalnya h = 1, wa ubah jadi h = 2. Jadi pas user input, dia mulainya bukan dari 1 lagi. 
	int k=a+1;
	int m=a*2-1+a-1;
	int c=a*2-1+a-1+a-2;
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(i==0){	
			printf("%d ",h);
			h=h+1;
		}
		    else if(i==a-1){
			    printf("%d ",m);
			m=m-1;
		}
		    else{
				if(j==0){
				    printf("%d ",c);
			c=c-1;
		}
				else if(j==a-1){
				    printf("%d ",k);
				k=k+1;
		}
				else{
				    printf("0 ");
			        }
				}

		}
		printf("\n");
	}
	return 0;
}
