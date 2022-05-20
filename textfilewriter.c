#include "textfilewriter.h"

void create_music_titles(FILE* stream) {

}

void read_file(char* file_name) {
	FILE *fp;
	fp = fopen(file_name, "r");
	char buffer[1000] = { 0, };

	fread(buffer, 1, 1000, fp);
	printf("%s", buffer);

	fclose(fp);
}

void write_file(char* file_name) {
	FILE *fp;
	fp = fopen(file_name, "w");

	fclose(fp);
}
