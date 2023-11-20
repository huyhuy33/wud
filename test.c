#include <stdio.h>


int main() {
    int n;
    int value[n];	
	do {
		printf("nhap so mon do: ");
		scanf("%d",&n);
	}while(n<=0);   
    	
    
    for(int i=0;i<n;i++) {
    	do {
    		printf("nhap so tien: ");
    		scanf("%d",&value[i]);
		}while(value[i] < 1000 || value[i]%1000 != 0);
	}	
	
	int VND[] = {1000, 2000, 5000, 10000, 20000, 50000, 100000, 200000, 500000};
	int length = sizeof(VND) / sizeof(VND[0]);
	
	for(int j =0;j<n;j++) {
		for (int i = length - 1; i >= 0;i--) {
			if (value[j] / VND[i] > 0) {
            	printf("%d * %d", value[j] / VND[i], VND[i]);
            	value[j] %= VND[i];
            	if (value[j] > 0) {
                    printf(" + ");  
                }
        	}
		}
		printf("\n");
	}
	

    return 0;
}
