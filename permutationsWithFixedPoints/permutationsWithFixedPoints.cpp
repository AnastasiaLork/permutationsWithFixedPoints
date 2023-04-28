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
    if ((n < 0) or (k < 0) or (k > n)) //Если n<k, n<0 или k<0 - выдать ошибку (вернуть -1)
        return -1;
    else
    {
        //Вычислить кол-во сочетаний по формуле C=n!/(k!*(n-k)!)
        int numberCombination = 0;

        numberCombination = factorial(n) / factorial(n - k) / factorial(k);

        return numberCombination;
    }
  
}

int derangement(int n)
{
    if (n < 0) //Если число n отрицательное, беспорядков не существует - выдать ошибку (вернуть -1)
        return -1;
    else
    {
        //Вычислить кол-во беспорядков по формуле P=(-1)^i * n!/i!, где i=(1,2...n)
        int numberDerangement = 0;

        for (int i = 0; i < n + 1; i++)
            numberDerangement += pow(-1, i) * factorial(n) / factorial(i);

        return numberDerangement;
    }

}

int main()
{
	
}