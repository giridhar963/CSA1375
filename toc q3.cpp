#include <stdio.h>

int main() {
    int transitions[][2] = {
        {1, 2}, 
        {1, 3}, 
        {1, 2}, 
        {4, 3}  
    };

    int state = 0;  
    char input;
    printf("Enter an input string: ");
    while ((input = getchar()) != '\n') 
	{
        if (input != 'a' && input != 'b') 
		{
            printf("Invalid input character '%c'\n", input);
            return 1;
        }

        int input_index = input == 'a' ? 0 : 1;  
        state = transitions[state][input_index]; 
        if (state == -1)
		 {
            printf("Input string does not belong to language\n");
            return 0;
        }
    }

    if (state == 3) 
	{
        printf("Input string belongs to language\n");
    }
	 else 
	{
        printf("Input string does not belong to language\n");
    }

    return 0;
}

