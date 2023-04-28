#include <iostream>
#include <stdio.h>
#include <locale.h>

int factorial(int n)
{
    if (n < 0)  //���� ����� �������������, ���������� �� ���������� - ������ ������ (������� -1)
        return -1;
    else
    {
        //��������� ��������� �� ������� n!=1*2*...*n
        int factorial_n = 1;

        for (int i = 1; i <= n; i++)
        {
            factorial_n *= (i);
        }
        return factorial_n;
    }  
}

int permutationsWithFixedPoints(int n, int k)
{
	return 0;
}

int combinationWithoutRepeat(int n, int k)
{
	return 0;
}

int derangement(int n)
{
    if (n < 0) //���� ����� n �������������, ����������� �� ���������� - ������ ������ (������� -1)
        return -1;
    else
    {
        //��������� ���-�� ����������� �� ������� P=(-1)^i * n!/i!, ��� i=(1,2...n)
        int numberDerangement = 0;

        for (int i = 0; i < n + 1; i++)
            numberDerangement += pow(-1, i) * factorial(n) / factorial(i);

        return numberDerangement;
    }

}

int main()
{
	
}