/*	File: string.c
 *	Desc: Functions that do various things from counting the
 * length of the string to copying the string to another string
 *
 *
*/

#include "string.h"

int my_strlen(char *s)
{
	int i = 0;
	
	if(s == NULL)
	{
		return -1;
	}
	
	while(s[i] != '\0')
	{
		i++;
	}
	
	return i;
}
int str2upper(char *s)
{
	int upper = 32;
	int i = 0, j = 0;
	int error = -1;
	
	if(s == NULL)
	{
		return error;
	}
	
	while(s[i] != '\0')
	{
		if(s[i] >= 97 && s[i] <= 122)
		{
			j++;
			
			if(s[i] == 132)
			{
				j++;
			}
		}
		i++;
	}
	return j;
}
int str2lower(char *s)
{
    int i = 0;
    int j = 0;
    int error = -1;
    
    if (s == NULL)
    {
        return error;
    }
	
    while(s[i] != '\0')
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            j++;
        }
            
        else if(s[i] == 132)
        {
            j++;
        }
            
        i++;  
    }
    return j;
}
int str_strip_numbers(char *s)
{
	int i = 0, j = 0;
	int error = -1;
	int old_length = 0, new_length = 0, final_length = 0;
	
	old_length = my_strlen(s);
	
	if(s == NULL)
	{
		return error;
	}
	
	while(s[i] != '\0')
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			new_length++;
		}
		i++;
	}
	
	final_length = old_length - new_length;
	
	return final_length;
}
void mystrcpy(char *s,char *d)
{
    int error = -1;
    int i = 0;
   
    while(*(s+i)!='\0')
    {
        *(d+i)=*(s+i);
        i++;
    }
	
	*(d+i)='\0'; //Forgot to add null at the end of the string
}
int mystrcmp (char *s, char *d)
{
	int i = 0, j = 0;
	
	while (s[i] == d[i] && s[i] != '\0')
      i++;
   if (s[i] > d[i])
      return 1;
   else if (s[i] < d[i])
      return -1;
   else
      return 0;
}
char * strdupl(char *s)
{
	char *t = (char*)malloc( 50 * sizeof(char) );
    int r=0;
	
    while(s[r] != '\0')
    {
       t[r] = s[r];
       r++; 
    }
	
    t[r]='\0';
    return &t[0];   
}