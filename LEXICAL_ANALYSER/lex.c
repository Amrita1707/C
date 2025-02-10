#include <stdio.h>
#include <string.h>

int check(char *);
char * key_words[] = { "auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","g							  oto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","uni                            on","unsigned","void","volatile","while"};

char * identifiers[] = { "main","printf","scanf"};

char * symbols[] = { "(",")","{","}","[","]",";" };

int main( int argc, char *argv[])
{
    FILE * fptr = fopen(argv[1],"r");

	if(fptr == NULL)
		  return -1;
	else
		  printf("Open     : ""%s" " : Success\n",argv[1]);
    printf("Parsing  : ""%s" " : Started\n",argv[1]);
    printf("\n");
	char ch[100];
	int i=0;

	while (fscanf(fptr, "%s", ch) != EOF)
	{
		check(ch);
	}
	printf("\n");

	printf("Parsing   : ""%s" " : Done\n",argv[1]);
	return 0;
}

int check( char str[])
{
	  int j=0,i,k,m;
	 
      if(str[j] >= 48 && str[j] <= 57)
	  {
			printf("Constant      : %s",str);
			printf("\n");
	  }
	  else 	  
	  {
		int flag = 1;
		for(m = 0 ; m < 7 ; m++)
		{
			  if( strcmp ( str,symbols[m]) == 0)
			  {
					printf("Symbol        : %s",str);
					printf("\n");
					flag = 0;
			  }
		}
        for( i = 0; i < 32 ; i++)
		{
			  if( strcmp ( str,key_words[i] ) == 0)
			  {
					printf("Keyword       : %s",str);
			  		printf("\n");
					flag = 0;
			  }
			
		}
		for ( k = 0 ; k < 3; k++)
		{
			  if(strcmp ( str, identifiers[k] ) == 0)
			  {
					printf("Identifier    : %s",str);
					printf("\n");
					flag = 0;
			  }
			
		}
		if(flag && (( str[j] >= 'a' && str[j] <= 'z' ) || ( str[j] >= 'A' && str[j] <= 'z') ) || str[j] == '"')
		{
			  printf("Identifier    : %s",str);
 		      printf("\n");
        }
	    if(flag && (!(( str[j] >= 'a' && str[j] <= 'z' ) || ( str[j] >= 'A' && str[j] <= 'z') )) && str[j] != '"')
		{
			  printf("Operator      : %s",str);
			  printf("\n");
		}
	  }

	return 0;
}
