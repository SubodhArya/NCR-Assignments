// assignment5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	char input[100];
	char input2[100];
	char cap[100];
	char con[100];
	char capital[100];
	char country[100];
	FILE *fp;
	fopen_s(&fp, "ten.txt", "r");
//	fputs("INDIA DELHI\n", fp);
	//fputs("USA WASHINGTON\n", fp);
	//fputs("TELANGANA HYDERABAD\n", fp);
	//fputs("UP LUCKNOW", fp);

	cout << "ENTER THE COUNTRY GET CAPITAL";
	cin >> input;
	fseek(fp, 0, SEEK_SET);
	
	while (1)
	{
		fgets(cap, 100, fp);
		for (int i = 0; i < strlen(cap); i++)
		{

			if (cap[i] == ' ')
			{
				capital[i] = '\0';
				break;
			}
			else
				capital[i] = cap[i];
		}
		if (strcmp(capital, input) == 0)
		{
			for (int i = strlen(capital); cap[i] != '\n'; i++)
			{
				cout << cap[i];
			}
			cout << "\n";
		}
		else if (feof(fp))
			break;
	}
	cout << "\n ENTER CAPITAL GET COUNTRY"; 
	cin >> input2;
	fseek(fp, 0, SEEK_SET);
	while (1)
	{
		fgets(con, 100, fp);
		int k;
		for (k = 0; con[k] != ' '; k++);
		k++;
		int l;
		for( l=0;con[k]!='\n';k++)
		{
				country[l++] = con[k];
		}
		country[l] = '\0';
		if (strcmp(country, input2) == 0)
		{
			for (int i = 0; con[i] !=' '; i++)
			{
				cout << con[i];
			}
		}
		else if (feof(fp))
			break;
	}
	fclose(fp);

	system("pause");
    return 0;
}

