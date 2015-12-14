#include <stdio.h>
#include <string.h>

// Funkcija strtok se uporablja v podobne namene kot metoda split() v javi
int main(int argc, char **argv)
{
	char str[] = "root:*:0:0:System Administrator:/var/root:/bin/sh";   
    char delims[] = ":";  // seznam locil
    char *result;         // kazalec na rezultate
    result = strtok(str, delims);   // obvezen prvi klic funkcije strtok
    while (result != NULL) {     
      printf("%s\n", result);        // ob uspehu result kaze na naslednji najdeni podniz 
      result = strtok(NULL, delims); // drugi in vsi nadalnji klici
    }

	return 0;
}
