#include<stdio.h> 
#include<locale.h> 
#include<iostream> 

void task1()
{

	int i, A[20] = { 0 };

	for (i = 0; i < 20; i++)
	{
		A[i] = -10 + rand() % 50;
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}


void task2()

{
	int i, A[20] = { 0 };

	for (i = 0; i < 20; i++)
	{
		A[i] = 50 + rand() % 50;
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}

void task3()
{

	int A[8] = { 0 }, i, a = 8;


	printf("Increasing:\n");
	for (i = 0; i < 8; i++)
	{
		A[i] = a;
		a--;
		printf("A[%d] = %d\n", i, A[i]);
	}

	a = 1;
	printf("\n\nDecreasing:\n");
	for (i = 0; i < 8; i++)
	{
		A[i] = a;
		a++;
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}



void task4()
{
	int A[10] = { 0 }, i, s, k, a = 0, b = 0;

	for (i = 0; i < 10; i++)
	{
		A[i] = -10 + rand() % 45;
		printf("A[%d] = %d\n", i, A[i]);
	}

	do
	{
		printf("\nWrite the index of the number in array\n");
		scanf_s("%d", &s);

		if (s >= 0 && s < 10)
		{
			a = 1;
			printf("A[%d] = %d\n", s, A[s]);
			if (A[s] > 0)
				printf("It is positive number\n");

			else
				printf("It is not a positive number\n");
		}

		else
		{
			printf("The index is invalid\n");
		}
	} while (a == 0);

	
	do
	{
		printf("\nWrite the second index of the number in array\n");
		scanf_s("%d", &k);

		if (k >= 0 && k < 10 && k != s)
		{
			b = 1;
			printf("A[%d] = %d\n", k, A[k]);
			if (A[s] % 2 == 0)
				printf("It is even number\n");

			else
				printf("It is odd number\n");
		}

		else if (k == s)
			printf("The second index must be not equal to the first\n");

		else
			printf("The index is invalid\n");
	} while (b == 0 || k == s);

	
	printf("\nA[%d] = %d\nA[%d] = %d\n", s, A[s], k, A[k]);
	
	if (A[s] > A[k])
		printf("\nA[%d] is more\n", s);

	else if (A[s] < A[k])
		printf("\nA[%d] is more\n", k);

	else
		printf("\nA[%d] is equal to A[%d]\n", s, k);

	system("pause");
}


void task5()
{

	int A[10] = { 0 }, i, b;

	printf("Given array:\n");
	for (i = 0; i < 10; i++)
	{
		A[i] = -10 + rand() % 50;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\n\nArray decreased to 20:\n");
	for (i = 0; i < 10; i++)
	{
		A[i] -= 20;
		printf("A[%d] = %d\n", i, A[i]);
	}
	
	b = A[9];
	printf("\n\nArray multiplied by A[9] = %d:\n", b);
	for (i = 0; i < 10; i++)
	{
		A[i] *= b;
		printf("A[%d] = %d\n", i, A[i]);
	}


	b = 5 + rand() % 30;
	printf("\n\nArray increased to %d:\n", b);
	for (i = 0; i < 10; i++)
	{
		A[i] += b;
		printf("A[%d] = %d\n", i, A[i]);
	}
	system("pause");
}

void task6()
{
	int i, A[10] = { 0 };

	printf("Given array:\n");
	for (i = 0; i < 10; i++)
	{
		A[i] = -15 + rand() % 30;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nPositive numbers:\n");
	for (i = 0; i < 10; i++)
	{
		if (A[i] >= 0)
		{
			printf("A[%d] = %d\n", i, A[i]);
		}
	}

	printf("\nNegaitve numbers:\n");
	for (i = 0; i < 10; i++)
	{
		if (A[i] < 0)
		{
			printf("A[%d] = %d\n", i, A[i]);
		}
	}

	system("pause");
}

void task7()
{
	int i, A[20] = { 0 };

	printf("The amount of wins of all teams:\n");
	for (i = 0; i < 20; i++)
	{
		A[i] = 0 + rand() % 6;
		printf("A[%d] = %d\n", i+1, A[i]);
	}

	printf("\nTeams with less than 3 wins:\n");
	for (i = 0; i < 20; i++)
	{
		if (A[i] < 3)
		{
			printf("A[%d] = %d\n", i+1, A[i]);
		}
	}

	system("pause");
}

void task8()
{
	int i, A[14] = { 0 }, i1 = 0;

	printf("Given array:\n");
	for (i = 0; i < 14; i++)
	{
		A[i] = 1 + rand() % 15;
		printf("A[%d] = %d\n", i + 1, A[i]);
	}

	printf("\nEven numbers:\n");
	for (i = 0; i < 14; i++)
	{
		if (A[i] %2 == 0)
		{
			i1++;
			printf("A[%d] = %d\n", i + 1, A[i]);
		}
	}

	printf("Amount of even numbers is %d\n", i1);

	system("pause");
}


void task9()
{
	int i, A[12] = { 0 }, av, sum = 0, i1 = 0;

	printf("Given array:\n");
	for (i = 0; i < 12; i++)
	{
		i1++;
		A[i] = 1 + rand() % 15;
		sum += A[i];
		printf("A[%d] = %d\n", i + 1, A[i]);
	}

	printf("The sum of all numbers is %d:\n", sum);
	av = sum / i1;
	printf("The average of all numbers is %d:\n", av);
	
	A[4] = av;
	printf("\nNew array:\n");
	for (i = 0; i < 12; i++)
	{
		printf("A[%d] = %d\n", i + 1, A[i]);
	}


	system("pause");
}



void task10()
{
	int i, A[15] = { 0 }, a;

	printf("Given array:\n");
	for (i = 0; i < 15; i++)
	{
		A[i] = 1 + rand() % 15;
		printf("A[%d] = %d\n", i + 1, A[i]);
	}

	a = A[0];
	
	printf("\nNumbers more than A[1] = %d:\n", a);
	for (i = 0; i < 15; i++)
	{
		if (A[i] > a)
		{
			printf("A[%d] = %d\n", i + 1, A[i]);
		}
		
	}


	system("pause");
}

int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	}

	printf("Хотите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}