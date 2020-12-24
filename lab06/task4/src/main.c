#include <stdio.h>
#include <string.h>

int main() {
   
	char *str = "pls, enter words with space";
	int Count_word = 1;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i]== ' ' && str[i + 1] != ' ') {
			Count_word++;
            
		} 
	} 
    
	return 0;
}
