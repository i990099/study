/*  
**Reads lines of input from the standard input and prints the longest line that 
** was found to the standard output. It is assumed that no line will exceed
 **1000 characters.
*/
#include <stdio.h> 
#include <stdlib.h>
#define MAX_LEN 1001    /* Buffer size for longest line */
int main(void) {
	char input[MAX_LEN]; 
	int len; 
	char longest[MAX_LEN];
	int longest_len;
	/* ** Initialize length of the longest line found so far. */ 
	longest_len = -1;
	/* ** Read input lines, one by one. */
	while (gets(input) != NULL && input[0] != 0) {
		/* 
		** Get length of this line. If it is longer than the previous 
		** longest line, save this line. 
		*/
		printf("longest_len=%d\n", longest_len);
		len = strlen(input); 
		printf("len=%d\n", len);
		printf("input=%s\n", input);
		printf("last=%c\n", input[len - 1]);
		if (len > longest_len) { 
			longest_len = len; 
			strcpy(longest, input);
		} 
	}
	/* ** If we saved any line at all from the input, print it now. */
	printf("%d\n", longest_len);

	if (longest_len >= 0)
		printf("%s\n", longest);
		//puts(longest);
	return EXIT_SUCCESS;
}
