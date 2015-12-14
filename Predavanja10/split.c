#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
	char str[] = "root:*:0:0:System Administrator:/var/root:/bin/sh";   
    char delims[] = ":";      
    char *result;   
    result = strtok(str, delims);   
    while (result != NULL) {     
      printf("%s\n", result);     
      result = strtok(NULL, delims);   
    }

	return 0;
}
