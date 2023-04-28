#include <iostream>
#include <stdio.h>
#include <locale.h>

int factorial(int n)
{
    if (n < 0)  //Если число отрицательное, факториала не существует - выдать ошибку (вернуть -1)
        return -1;
    else
    {
        //Вычислить факториал по формуле n!=1*2*...*n
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
	return 0;
}

int main()
{
	
}