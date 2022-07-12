#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
/**
 * randompasswordGeneration: print random password
 * Function to randomly generates password
 * of length N
 * Return: void
 */
void randomPasswordGeneration(int N)
{
	int i = 0;
           
      	int randomizer = 0;
  	srand((unsigned int)(time(NULL)));
        char  numbers[] = "0123456789";
        char letter[] = "abcdefghijklmnoqprstuvwyzx";                            
        char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYZX";
	char symbols[] = "!@#$^&*?";
	char crackme[] = "Tada! Congrats";
 	char password[N];

 	randomizer = rand() % 4;
	for (i = 0; i < N; i++) 
    	{
		if (randomizer == 1)
		{
       		 	password[i] = numbers[rand() % 10];
                 	randomizer = rand() % 4;
                	printf("%c", password[i]);
        	}
        	else if (randomizer == 2) 
		{
            		password[i] = symbols[rand() % 8];
         		randomizer = rand() % 4;
		        printf("%c", password[i]);
        	}
		else if (randomizer == 3) 
		{
                	password[i] = LETTER[rand() % 26];
               		randomizer = rand() % 4;
              		printf("%c", password[i]);
        	}
		else if (randomizer == 4)
		{
			password[i] = crackme[rand() % 14];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
                	randomizer = rand() % 4;
              		printf("%c", password[i]);
        	}
	}
	printf("\n");
}
/**
 * main - check your code.
 *
 * Return: Always 0.
 */
int main()
{
   	int N = 0;
	
	randomPasswordGeneration(N);
	return 0;
}
