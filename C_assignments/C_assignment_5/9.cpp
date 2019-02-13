// 9.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	FILE *fp;
	char ch[100];
	cin.getline(ch, 100);
	fopen_s(&fp, "9.txt", "r+");
	for (int i = 0; i < strlen(ch); i++)
	{
		if (isupper(ch[i]))
		{
			fputc(tolower(ch[i]), fp);
		}
		else if (islower(ch[i]))
		{
			fputc(toupper(ch[i]), fp);
		}
		else
			fputc(ch[i], fp);
	}
	cout << "The current file position is";
	int pos;
	pos = ftell(fp);
	cout << pos << "\n";
	fseek(fp, 0, SEEK_SET); 
	
	cout << "Contents of file are:\n";
	char out[100];
	fgets(out, 100, fp);
	cout << out;
	fclose(fp);
	system("pause");




    return 0;
}

