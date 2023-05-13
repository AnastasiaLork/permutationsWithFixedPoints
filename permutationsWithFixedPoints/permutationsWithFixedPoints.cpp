#include <iostream>
#include <stdio.h>
#include <locale.h>
#include "permutationsWithFixedPoints.h"

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
    if ((n < 0) or (k < 0) or (k > n)) //Если n<k, n<0 или k<0, перестановок не существует - выдать ошибку (вернуть -1)
        return -1;
    else
    {
        int P = 0; //кол-во перестановок

        //Если кол-во неподижных точек равно нулю - выычислить только кол-во беспорядков размера n
        if (k == 0)
            P = derangement(n);
        else
            //Иначе вычислить кол-во сочетаний из n по k и умножить на кол-во беспорядков размера n-k
            P = combinationWithoutRepeat(n, k) * derangement(n - k);

        return P;
    }
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

int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, ""); //для вывода сообщений русскими буквами


     // буфер для считавания данных из файла в формате строки
    char buffer[256] = "";

    // чтение из файлов
    FILE* inputfile = fopen(argv[1], "r");
    FILE* outputfile = fopen(argv[2], "w+");

    //Если файлы не читаются - вывести сообщение об ошибке 
    if (inputfile == NULL)
        printf("Неверно указан файл с входными данными. Возможно, файл не существует.\n");
    else if (outputfile == NULL)
        printf("Неверно указан файл для выходных данных. Возможно указанного расположения не существует или нет прав на запись.\n");
    else
    {
        fgets(buffer, 10, inputfile); //Копирование данных из файла в буфер в формате строки


        if (strcmp(buffer, "") == 0)    //Если входной файл пустой - вывести сообщение об ошибке
            printf("Входной файл пустой.\n");
        else
        {
            if (strchr(buffer, '\n')) //Если в файле больше одной строки - вывести сообщение об ошибке
                printf("Программа принимает на вход файлы из одной строки. Разместите каждую строчку в отдельном файле.\n");
            else
            {
                //Разобрать строку на элементы, разделенные пробелами
                char* element1 = strtok(buffer, " "); //Выделить первый элемент
                char* element2 = NULL;
                char* element3 = NULL;

                if (element1 != NULL)
                    element2 = strtok(NULL, " "); //Если не конец строки - выделить второй элемент
                if (element2 != NULL)
                    element3 = strtok(NULL, " ");//Если не конец строки - выделить третий элемент


                if (element3 != NULL || element2 == NULL) // Если в строке меньше или больше двух элементов, разделенных пробелами - вывести сообщение об ошибке
                    printf("Во входной строке неподходящее количество элементов. Введите через пробел два целых числа.\n");
                else
                {
                    bool correctData = true; //флаг, контролирующий корректность входных данных
                    bool isNumber = true;

                    //Определить, является ли первый элемент числом
                    for (int i = 0; element1[i] != 0; i++)
                    {
                        if (element1[i] < '0' || element1[i] > '9')
                            isNumber = false;
                    }

                    //Если первый элемент не число - вывести ошибку
                    if (!isNumber)
                    {
                        printf("Элемент \"%s\" не является неотрицательным целым числом.\n", element1);
                        correctData = false;
                    }

                    //Определить, является ли второй элемент числом
                    isNumber = true;
                    for (int i = 0; element2[i] != 0; i++)
                    {
                        if (element2[i] < '0' || element2[i] > '9')
                            isNumber = false;
                    }

                    //Если второй элемент не число - вывести ошибку
                    if (!isNumber)
                    {
                        printf("Элемент \"%s\" не является неотрицательным целым числом.\n", element2);
                        correctData = false;
                    }
                
                //Перевод строк в два числа n и k формата int
                //Проверить, входит ли значение размера перестановок в диапазон [1..9]
                //Проверить, входит ли значение кол-ва неподвижных точек в диапазон [0..n]
                //Если данные корректны - решить задачу
                
              
                
                //Нахождение кол-ва перестановок с неподвижными точками
                int result;
                       

                //Запись ответа в выходной файл
                char str[10];
                _itoa(result, str, 10);
                fputs(str, outputfile);

                //Закрыть файлы
                fclose(outputfile);
                fclose(inputfile);
                    
                
            }
        }
    }
}