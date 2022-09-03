#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	FILE* pFile;
	char buffer[] = { 'x' , 'y' , 'z' };
	pFile = fopen("myfile.bin", "wb");
	fwrite(buffer, sizeof(char), sizeof(buffer), pFile);
	fclose(pFile);
	_getch();
	return 0;
}