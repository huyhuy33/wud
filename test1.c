#include<stdio.h>

int main() {
	
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int length = 0;
	int a = n;
	int digitArr[10];
	while(a>0) {
		int digit = a % 10;
        digitArr[length] = digit;
        length++;
		a /= 10;	
    }
    int count[length];
    
    for(int i=0;i<length;i++) {
    	count[i] = 1;
	}
    
    for(int i=length-1;i>=0;i--) {
    	for(int j=i-1;j>=0;j--) {
    		if(digitArr[i] == digitArr[j]) {
    			count[i]++;
			}
		}
	}
	
	int maxValue = 0;
	int maxCount =0;
	for(int i =0;i<length;i++) {
		if(count[i] > maxCount) {
			maxCount = count[i];
			maxValue = digitArr[i]; 
		}
	}


	printf("So chu: %d\n",length);
	printf("Gia tri bi trung nhieu nhat: %d\n",maxValue);
	printf("So lan bi trung: %d\n",maxCount);
	return 0;
}
