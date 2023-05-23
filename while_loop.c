#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("Bitte geben Sie einen Dateipfad als Argument an.\n");
		return 1;
	}

	File* datei;
	char dateipfad[100];

	snprintf(dateipfad, sizeof(dateipfad), "%s", argv[1]);

	datei = fopen(dateipfad, "r");

	int zeichen;
	//EOF = End of File
	while((zeichen = fgetc(datei)) != EOF)
	{
		printf("%c", zeichen);
	}

	fclose(datei);

	return 0;
