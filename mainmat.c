//#include "mymat.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MAX_LENGTH 100

int main()
{
	int stop = 0;
	char inp [MAX_LENGTH];
	int i;
	char space = ' ';
	int pos;
	char cmd[MAX_LENGTH];
	int valid;
	
	printf("insert input of command and arguments:\n");

	while(!stop)
	{
	    	pos = 0;
	    memset(inp, 0, sizeof(inp));
		scanf(" %[^\n]", inp);
		{
            while(sscanf(inp+pos, "%s", cmd) == 1)
			{
				printf("%s, pos=%d\n",cmd, pos);
				printf("%s, pos=%d\n",cmd, pos);
				printf("%s, pos=%d\n",cmd, pos);
				sleep(2);
				//valid = checkfuncname(cmd)
			//	if(valid)
			//	{
			///		print("Undefined command name");
			//		break;
			//	}
			//	else
					
				//some validation...
				pos += strcspn(inp+pos, " ");
				pos += 1;
		
            }

        }
	}
	return 0;
}


