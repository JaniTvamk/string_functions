#define ASCIIALPHABET 32
#include "string.h"
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *s) // Use this function to calculate the lenght of a string.
{
	int i=0;
	while(*(s+i) != '\0')
	{
		i++;
	}
	return i;

}

int str2upper(char *s)  //Use this function to convert lower case english alphabet to upper case
{
int i = 0;
int j=0;
	while (*(s+i) != '\0')
	{
		if(*(s+i) >= 'a' && *(s+i) <= 'z')
		{
			*(s+i) = *(s+i) - ASCIIALPHABET;
			j = j + 1;
		}
		else
		{
			(*(s+i) = *(s+i));
		}
		i++;
	}
return j;
}

int str2lower_(char *s) // Use this function to convert upper case english alphabet to lower case
{
	int i = 0;
	int j=0;
	while (*(s+i) != '\0')
	{
		if(*(s+i) >= 'A' && *(s+i) <= 'Z')
		{
			*(s+i) = *(s+i) + ASCIIALPHABET;
			j=j+1;
		}
		else
		{
			(*(s+i) = *(s+i));
		}
		i++;
	}

	return j;
}

int str_strip_numbers(unsigned char *s)// Use this function to strip a string from numbers and returns the new lenght of the string(Doesn't take work with two or more numbers back to back).
{
	int i = 0;
	int j=0;
	
	
	int len_old=0;
	while(*(s+len_old) != '\0')
	{
		len_old++;
	}
	
	int len_new = len_old;
	
	
	while (*(s+i) != '\0')
	{
		if(*(s+i) >= '0' && *(s+i) <= '9')
		{
			for(j=i;j<=len_old;j++)
			{
			*(s+j) = *(s+j+1);
			}
			
			len_new--;
		}
		else
		{
			(*(s+i) = *(s+i));
		}
		i++;
		
	}
	return len_new;
}

void mystrcpy(char *s,char *d)//use this function to copy a string to another variable
{
	int j=0;
	while (*(d+j) != '\0')
	{
		*(s+j) = *(d+j);	
		j++;
	}
	*(s+j)='\0';
	
}


int mystrcmp (char *s, char *d)//use this function to compare two strings.(Returns the position of firt different character and tells which one is before in the alphabet)
{
	int i=0;
	while(*(s+i) != '\0' && *(d+i) != '\0' && *(s+i) == *(d+i)){
	i++;
	}
	if(*(s+i) < *(d+i)){
		
		return -i;
	}
	if(*(s+i) == *(d+i)){
		
		return 0;
	}
	if(*(s+i) > *(d+i)){
		
		return +i;
	}
}


char * strdupl(char *s)//use this function to make a duplicate of your string.(Returns a pointer to new variable with your string).
{
	int length = my_strlen(s);
	char *a;
	
	a = (char*)malloc(sizeof(char)*length);
	
		if(a == NULL) return NULL;
		mystrcpy(a,s);
	
	return a;
	
}
