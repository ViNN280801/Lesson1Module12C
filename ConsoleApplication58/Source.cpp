#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<string.h>

using namespace std;
FILE *ptt;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int N;
	printf("������� �������:");
	scanf("%d",&N);
	switch (N)
	{
	case 1:
	{
		int *pt = NULL;
		pt = (int*)calloc(10, sizeof(int));
		if ((ptt = fopen("chislo2.txt", "w")) != NULL)
		{
			for (int i = 0; i < 10; i++)
			{
				*(pt + i) = (1 + rand() % 100) * 10;
				fprintf(ptt, "%d\t", *(pt + i));
			}
			fclose(ptt);
			free(pt);
		}
	}
	break;
	case 2:
	{
		int *pt = NULL;
		pt = (int*)calloc(10, sizeof(int));
		int i = 0;
		if ((ptt = fopen("f.txt", "r")) != NULL)
		{
			while (fscanf(ptt, "%d\t",pt+i) != EOF)
			{
				i++;
			}
			fclose(ptt);
			if ((ptt = fopen("g.txt", "w")) != NULL)
			{
				for (int i = 0; i < 10; i++)
				{
					if (*(pt + i) % 2 != 0)
					fprintf(ptt, "%d\t", *(pt + i));
				}
			}
			fclose(ptt);
			if ((ptt = fopen("h.txt", "w")) != NULL)
			{
				for (int i = 0; i < 10; i++)
				{
					if (*(pt + i) % 2 == 0)
						fprintf(ptt, "%d\t", *(pt + i));
				}
			}
			fclose(ptt);
		}
		free(pt);
	}
	break;
	case 3:
	{
		int *pt = NULL;
		pt = (int*)calloc(10, sizeof(int));
		int i = 0;
		if ((ptt = fopen("f.txt", "r")) != NULL)
		{
			while (fscanf(ptt, "%d\t", pt + i) != EOF)
			{
				i++;
			}
			fclose(ptt);
			if ((ptt = fopen("g.txt", "w")) != NULL)
			{
				for (int j=i-1 ; j >=0; j--)
				{
						fprintf(ptt, "%d\t", *(pt + j));
				}
			}
			fclose(ptt);
		}
		free(pt);
	}
	break;
	case 4:
	{

		int *pt = NULL;
		pt = (int*)calloc(10, sizeof(int));
		if ((ptt = fopen("f.txt", "w")) != NULL)
		{
			for (int i = 0; i < 10; i++)
			{
				*(pt + i) = -50 + rand() % 100;
				fprintf(ptt, "%d\t", *(pt + i));
			}
			fclose(ptt);
		}
		if ((ptt = fopen("f.txt", "r")) != NULL)
		{
			int i = 0;
			while (fscanf(ptt, "%d\t", pt + i) != EOF)
			{
				i++;
			}
			fclose(ptt);
			if ((ptt = fopen("g.txt", "w")) != NULL)
			{
				int j = 0;
				for (int z = 0; z < i; z++)
				{
					if ((j % 2 != 0 && *(pt + z) > 0) || (j % 2 == 0 && *(pt + z) < 0))
					{
						fprintf(ptt, "%d\t", *(pt + z));
						j++;
					}
				}
			}
			fclose(ptt);
		}
		free(pt);
	}
	break;
	case 5:
	{
/*5.	���������� ��� �������� ��������������� �����, ������ ������� �������� � ��������� �����. ����������� ��� ��������
a.	��������, ��� � ������������ ����� �������� 12 ����
b.	������ ������������� ����� ����������
*/
		char Slovo[] = "������, ��� � ������� � 11 �����, ������� �������� �����, ���� �����!";
		char *pt=NULL;
		pt = (char*)calloc(1, sizeof(char));
		if ((ptt = fopen("text2.txt", "w")) != NULL)
		{
			for (int i = 0; i < strlen(Slovo); i++)
			{
				fprintf(ptt, "%c", *(Slovo + i));
			}
			fclose(ptt);
		}
		if ((ptt = fopen("text2.txt", "r")) != NULL)
		{
			int i = 0;
			while (fscanf(ptt, "%c", Slovo + i) != EOF)
			{
				i++;
				pt = (char*)realloc( pt,sizeof(char)*(i+1));
			}
			*(Slovo + i) = '\0';
			fclose(ptt);
			printf("%s\n", Slovo);
		}
		free(pt);
	}
	break;
	case 6:
	{
		//6.	������� ����, ���������� �������� �������� ��������� �����.�������� �����, ������������ ����� �������
		char Slovo[] = "c � � � �";
		char *pt = NULL;
		pt = (char*)calloc(1, sizeof(char));
		if ((ptt = fopen("text2.txt", "w")) != NULL)
		{
			for (int i = 0; i < strlen(Slovo); i++)
			{
				fprintf(ptt, "%c", *(Slovo + i));
			}
			fclose(ptt);
		}
		if ((ptt = fopen("text2.txt", "r")) != NULL)
		{
			int i = 0;
			while (fscanf(ptt, "%s", pt+i) != EOF)
			{
				i++;
				pt = (char*)realloc(pt, sizeof(char)*(i + 1));
			}
			*(pt + i) = '\0';
			fclose(ptt);
			printf("%s\n", pt);
		}
		free(pt);
	}
	case 7:
	{
		/*7.	������� �������������� ����, ���������� �������� �������� ��������� �����. ���������� ��� �����, ������������ */
		char Slovo[] = "����� ����� ���� ���� �������. ����� ����� ���� ���� �������. � ����� �� �����.";
		char *pt = NULL;
		pt = (char*)calloc(1, sizeof(char));
		if ((ptt = fopen("text2.txt", "w")) != NULL)
		{
			for (int i = 0; i < strlen(Slovo); i++)
			{
				fprintf(ptt, "%c", *(Slovo + i));
			}
			fclose(ptt);
		}
		if ((ptt = fopen("text2.txt", "r")) != NULL)
		{
			int i = 0;
			while (fscanf(ptt, "%c", pt + i) != EOF)
			{
				i++;
				pt = (char*)realloc(pt, sizeof(char)*(i + 1));
			}
			*(pt + i) = '\0';
			fclose(ptt);
			int flag = 0;
			for (int i = 0; i < strlen(pt); i++)
			{

				if ((*(pt + i) == '�'&&*(pt + i-1)==' ') || flag == 1)
				{
					printf("%c", *(pt + i));
					flag = 1;
				}
				if (*(pt + i) == ' ')
				{
					flag =0;
				}

			}
		}
		free(pt);
	}
	break;
	case 8:
	{
		/*8.	������� �������������� ����, � ������� �������� 18 ����� �����. ���������� ��� ������������� ����� ����� � ������ � ��� �� �������*/

		int *pt = NULL;
		pt = (int*)calloc(10, sizeof(int));
		int i = 0;
		if ((ptt = fopen("f.txt", "r")) != NULL)
		{
			while (fscanf(ptt, "%d\t", pt + i) != EOF)
			{
				i++;
			}
			fclose(ptt);
			for (int j = 0; j < i; j++)
			{
				printf("%d\n", pt + j);
			}
		}
		free(pt);
	}
	break;
	case 9:
	{
		/*9.	� ������������ �������������� �����, ���������� �������� �������� ��������� �����, �������� �� �������� �����
			a.s - � �����
			b.��������� �����*/
		char Slovo[] = "������ ��������� ������ ������� ��� ���� �������� ��� ������� ���������� ���� ���";
		char *pt = NULL;
		pt = (char*)calloc(1, sizeof(char));
		if ((ptt = fopen("text2.txt", "w")) != NULL)
		{
			for (int i = 0; i < strlen(Slovo); i++)
			{
				fprintf(ptt, "%c", *(Slovo + i));
			}
			fclose(ptt);
		}
		if ((ptt = fopen("text2.txt", "r")) != NULL)
		{
			int i = 0;
			while (fscanf(ptt, "%c", pt + i) != EOF)
			{
				i++;
				pt = (char*)realloc(pt, sizeof(char)*(i + 1));
			}
			*(pt + i) = '\0';
			fclose(ptt);
			int I;
			int J;
			for (int i = strlen(pt) - 1; i > 0; i--)
			{


				if (*(pt + i) == ' ')
				{
					I = i;
					for (int j = 0, z = I + 1; z < strlen(pt) ; j++, z++)
					{
						Slovo[j] = *(pt + z);
						Slovo[j + 1] = '\0';
					}
					*(pt + i+1) = '\0';
					break;
				}
			}
			for (int i = 0; i < strlen(pt); i++)
			{

				if (*(pt + i) == ' ')
				{
					J = i;
					strcat(Slovo, (pt + i));
					*(pt + i) = '\0';
					strcat(Slovo, pt);
				}
			}
		}
		printf("%s\n", Slovo);
		free(pt);
	}
	break;
	case 10:
	{
/*10.	���������� ��������������� ����� �������� ��������� �����. �������� ��� ��� �������� �� ������ ����� (�� �������� �������� � ����������).*/
		char Slovo[5][20];
		printf("������ 5 ����� ����� ������\n");
		scanf("%s %s %s %s %s", Slovo[0], Slovo[1], Slovo[2], Slovo[3], Slovo[4]);
		if ((ptt = fopen("text2.txt", "w")) != NULL)
		{
			for(int j=0;j<4;j++)
			{
				fprintf(ptt, "%s ", Slovo[0]);
			}
			fclose(ptt);
		}
	}
	break;
	case 11:
	{
		/*11.	������� �������������� ����, ���������� �������� �������� ��������� �����, ������������ ������������������ ���������. �������� ����� ����, � ������� ����� ����� ��������� ����� ����������� ���������*/
		char Slovo[] = "������ ��������� ������ ������� ��� ���� �������� ��� ������� ���������� ���� ���";
		char *pt = NULL;
		pt = (char*)calloc(1, sizeof(char));
		if ((ptt = fopen("text2.txt", "w")) != NULL)
		{
			for (int i = 0; i < strlen(Slovo); i++)
			{
				fprintf(ptt, "%c", *(Slovo + i));
			}
			fclose(ptt);
		}
		if ((ptt = fopen("text2.txt", "r")) != NULL)
		{
			int i = 0;
			while (fscanf(ptt, "%c", pt + i) != EOF)
			{
				i++;
				pt = (char*)realloc(pt, sizeof(char)*(i + 1));
			}
			*(pt + i) = '\0';
			fclose(ptt);
		}
		if ((ptt = fopen("text3.txt", "w")) != NULL)
		{
			for (int i = 0; i < strlen(pt); i++)
			{
				fprintf(ptt, "%c", *(pt + i));
			}
			fclose(ptt);
		}
		free(pt);
	}
	}
}