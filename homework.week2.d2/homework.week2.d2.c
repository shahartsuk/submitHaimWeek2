#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable : 4996)
void printNumOfChar();
void printOfAsterisk();
void printTheFile();
void memoryAllocation();
int main()
{
	printNumOfChar();
	printOfAsterisk();
	printTheFile();
	memoryAllocation();
}
void printNumOfChar()
{
	int counOfNotes = 0;
	FILE* f;
	f = fopen("C:\\Users\\shaha\\source\\repos\\homework.week2.d2\\scode.txt", "r");
	char ch;
	if (!f)
	{
		exit(1);
	}
	ch = fgetc(f);
	while (ch != EOF)
	{
		ch = fgetc(f);
		counOfNotes++;
	}
	printf("%d\n", counOfNotes);
	fclose(f);
}
void printOfAsterisk()
{
	int counOfAsterisk = 0;
	FILE* f;
	f = fopen("C:\\Users\\shaha\\source\\repos\\homework.week2.d2\\scode.txt", "r");
	char ch=0;
	if (!f)
	{
		exit(1);
	}
	while (ch != EOF)
	{
		ch = fgetc(f);
		if (ch == '*')
		{
		counOfAsterisk++;
		}
	}
	printf("%d\n", counOfAsterisk);
	fclose(f);
}
void printTheFile()
{
	int counOfLines = 1;
	FILE* f;
	f = fopen("C:\\Users\\shaha\\source\\repos\\homework.week2.d2\\exe3.txt", "r");
	char ch = 0;
	if (!f)
	{
		exit(1);
	}
	while (ch != EOF)
	{
		ch = fgetc(f);
		if (ch == '\n')
		{
			counOfLines++;
		}
	}
	printf("%d\n", counOfLines);
	fclose(f);
}
void memoryAllocation()
{
	int counterI = 0;
	int counterC = 0;
	int memoryAllocationCount = 0;
	FILE* f;
	f = fopen("C:\\Users\\shaha\\source\\repos\\homework.week2.d2\\HW2_3.txt", "r");
	char chNum = 0;
	char chLetter = 0;
	int* ptrInt;
	char* ptrChar;
	int* intArray;
	char* charArray ;
	while (chLetter != EOF)
	{
		chNum = fgetc(f) - '0';
		chLetter = fgetc(f);
		if (chLetter == 'i')
		{
			counterI += chNum;
		}
		else if (chLetter == 'c')
		{
			counterC += chNum;
		}
	}
	intArray = malloc(sizeof(int) * counterI);
	charArray = malloc(sizeof(char) * counterC);
	ptrInt = intArray;
	ptrChar = charArray;
	for (int i = 0; i < counterI; i++)
	{
		printf("please entrt a number for int array");
		scanf("%d", intArray);
		intArray++;
	}
	for (int i = 0; i < counterC; i++)
	{
		printf("please entrt a number for char array");
			scanf(" %d", charArray);
			charArray++;
	}
	*ptrChar += *ptrChar;
	fclose(f);
	free(ptrInt);
	free(ptrChar);
}
