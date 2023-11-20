#include<stdio.h>
#include <string.h>



int main() {
	
	char s[] = "cau   lac    bo WUD   dinh nhat Campuchi va Malaysia";
	int length = strlen(s);

	
	for(int i=0;i<length;i++) {
		if(s[i]==' ' && s[i+1]==' ') {
			for(int j=i+1;j<length;j++) {
				s[j] = s[j+1];
			}
			length--;
			i--;
		}
	}
	
	s[length] = '\0';
	
	int words = 0;
	
	for(int i=0;i<length;i++) {
		if(s[i]==' ') {
			words++;
		}
	}		


    int start = 0;
	int longest = 0;
    int longest_pos[length];  
    int count = 0;

	for (int i = 0; i <= length; i++) {
        if(s[i] == ' ' || s[i] == '\0') {
            if(i - start > longest) {
                longest = i - start;
                count = 1;
                longest_pos[0] = start;
            } else if (i - start == longest) {
                // Another word with the same length
                longest_pos[count++] = start;
            }
            start = i + 1;  // Move start to the beginning of the next potential word
        }
    }


	printf("%s\n", s);
	printf("%d\n", words+1);
    printf("Longest word(s): %d letters\n", longest);
    for (int j = 0; j < count; j++) { 
        printf("'%.*s'\n", longest, s + longest_pos[j]);
    }


    printf("Value of longest_pos[0]: %d\n", longest_pos[0]);
    printf("Value of longest_pos[1]: %d\n", longest_pos[1]);

	printf("%d",length);




	
	
	return 0;
}
