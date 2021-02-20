#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	srand(time(NULL));
	/// 1 файл
	int b;
	int arr[3];
	int file;
	FILE* f;
	file = fopen_s(&f, "FILE_A.txt", "w+");
	int max = 0;
	int max_1 = 0;
	int max_2 = 0;
	if (file != 0) return EXIT_FAILURE;
	for (int a = 0; a < 3; a++) {
		b = 1 + rand() % 9;
		fprintf(f, "%d ", b);
		arr[a] = b;
	}

	fclose(f);
	// 2 файл
	int arr_1[3];
	int c;
	int file_1;
	FILE* f_1;
	file_1 = fopen_s(&f_1, "FILE_B.txt", "w+");
	if (file_1 != 0) return EXIT_FAILURE;
	for (int a = 0; a < 3; a++) {
		c = 1 + rand() % 9;
		fprintf(f_1, "%d ", c);
		arr_1[a] = c;
	}
	fclose(f_1);
	// 3 файл
	int arr_2[3];
	int p;
	int file_2;
	FILE* f_2;
	file_2 = fopen_s(&f_2, "FILE_C.txt", "w+");
	if (file_2 != 0) return EXIT_FAILURE;
	for (int a = 0; a < 3; a++) {
		p = 1 + rand() % 9;
		fprintf(f_2, "%d ", p);
		arr_2[a] = p;
	}

	fclose(f_2);
	//////////////////////

	int file_3;
	FILE* f_3;
	file_2 = fopen_s(&f_3, "FILE_D.txt", "w+");
	if (file_2 != 0) return EXIT_FAILURE;
	for (int a = 0; a < 3; a++) {
		if (a == 0)
		{
			fprintf(f_3, "%d ", arr[a]);
			fprintf(f_3, "%d ", arr_1[a]);
			fprintf(f_3, "%d ", arr_2[a]);
		}
		if (a == 1)
		{
			fprintf(f_3, "%d ", arr[a]);
			fprintf(f_3, "%d ", arr_1[a]);
			fprintf(f_3, "%d ", arr_2[a]);
		}
		if (a == 2)
		{
			fprintf(f_3, "%d ", arr[a]);
			fprintf(f_3, "%d ", arr_1[a]);
			fprintf(f_3, "%d ", arr_2[a]);
		}
		
	}

	fclose(f_3);

}
