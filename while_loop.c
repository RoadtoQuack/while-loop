#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("Bitte geben Sie einen Dateipfad als Argument an.\n");
		return 1;
	}

	FILE* datei;
	char dateipfad[100];

	snprintf(dateipfad, sizeof(dateipfad), "%s", argv[1]);

	datei = fopen(dateipfad, "r");

	int zeichen;
	//EOF = End of File
	while((zeichen = fgetc(datei)) != EOF)
	{
		printf("%c", zeichen);
	}

//char text[1000];
//int index = 0;
//char zeile[100];
//while(fgets(zeile, sizeof(zeile), datei) != NULL) 
//{
//	int zeilenlänge = strlen(zeile);
//	strncpy(text + index, zeile, zeilenlänge);
//	index += zeilenlänge;
//}
//text[index] = '\0';

//printf("%s\n", text);

	fclose(datei);

	return 0;
}
