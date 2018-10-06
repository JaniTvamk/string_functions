#define ASCIIALPHABET 32
#include "string.h"
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *s)
{
	int i=0;
	while(*(s+i) != '\0')
	{
		i++;
	}
	return i;

}

int str2upper(char *s)
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

int str2lower_(char *s)
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

int str_strip_numbers(unsigned char *s)
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

void mystrcpy(char *s,char *d)
{
	int j=0;
	while (*(d+j) != '\0')
	{
		*(s+j) = *(d+j);	
		j++;
	}
	*(s+j)='\0';
	
}


int mystrcmp (char *s, char *d)
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


char * strdupl(char *s)
{
	int length = my_strlen(s);
	char *a;
	
	a = (char*)malloc(sizeof(char)*length);
	
		if(a == NULL) return NULL;
		mystrcpy(a,s);
	
	return a;
	
}
