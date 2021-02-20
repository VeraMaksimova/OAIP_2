

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int b;
	int file;
	FILE *f;
	file = fopen_s(&f, "FILE_A.txt", "w+");
	int max = 0;
	int max_1 = 0;
	int max_2 = 0;
	if (file != 0) return EXIT_FAILURE;
	for ( int a = 0; a < 3; a++) {
		b = 1 + rand() % 9;
		fprintf(f, "%d ", b);
		if (a == 0)
		{
			max = b;
		}
		if (a == 1)
		{
			max_1 = b;
		}
		if (a == 2)
		{
			max_2 = b;
		}
	}
	
	fclose(f);
	int c;
	int file_1;
	FILE* f_1;
	file_1 = fopen_s(&f_1, "FILE_B.txt", "w+");
	if (file_1 != 0) return EXIT_FAILURE;
	for (int a = 0; a < 3; a++) {
		c = 1 + rand() % 9;
		fprintf(f_1, "%d ", c);
		if (a == 0) {
			if (c > max) max = c;
		}
		if (a == 1) {
			if (c > max_1) max_1 = c;
		}
		if (a == 2) {
			if (c > max_2) max_2 = c;
		}
	}

	fclose(f_1);

	int p;
	int file_2;
	FILE* f_2;
	file_2 = fopen_s(&f_2, "FILE_C.txt", "w+");
	if (file_2 != 0) return EXIT_FAILURE;
	for (int a = 0; a < 3; a++) {
		p = 1 + rand() % 9;
		fprintf(f_2, "%d ", p);
		if (a == 0) {
			if (p > max) max = p;
		}
		if (a == 1) {
			if (p > max_1) max_1 = p;
		}
		if (a == 2) {
			if (p > max_2) max_2 = p;
		}
	}

	fclose(f_2);
	//////////////////////
	
	int file_3;
	FILE* f_3;
	file_2 = fopen_s(&f_3, "FILE_D.txt", "w+");
	if (file_2 != 0) return EXIT_FAILURE;
	for (int a = 0; a < 3; a++) {
		if(a == 0) fprintf(f_3, "%d ", max );
		if (a == 1) fprintf(f_3, "%d ", max_1);
		if (a == 2) fprintf(f_3, "%d ", max_2);
	}

	fclose(f_3);

}

