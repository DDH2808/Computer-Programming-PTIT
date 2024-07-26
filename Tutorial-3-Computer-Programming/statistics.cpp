#include "statistics.h"
double power(double a, long long b)
{
    double ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a);
        a = (a * a);
        b >>= 1;
    }
    return ans;
}
standardDeviation::standardDeviation()
{
    numbersCount = 0;
    data.clear();
}

void standardDeviation::NumbersCount(size_t count)
{
    numbersCount = count;
}

void standardDeviation::Data(vector<double> dataSet)
{
    data = data;
}
vector<double> standardDeviation::Data()
{
    return data;
}

size_t standardDeviation::NumbersCount()
{
    return numbersCount;
}

double standardDeviation::mean(double number)
{
    return number;
}

double standardDeviation::mean(double number1, double number2)
{
    return (number1 + number2) / numbersCount;
}

double standardDeviation::mean(double number1, double number2, double number3)
{
    return (number1 + number2 + number3) / numbersCount;
}

double standardDeviation::mean(double number1, double number2, double number3, double number4)
{
    return (number1 + number2 + number3 + number4) / numbersCount;
}
double standardDeviation::mean(vector<double> dataSet)
{
    double sum = 0;
    for (size_t i = 0; i < numbersCount; i++)
    {
        sum += dataSet[i];
    }
    return sum / numbersCount;
}

double standardDeviation::variance(double number)
{
    return 0;
}

double standardDeviation::variance(double number1, double number2)
{
    double meanData = mean(number1, number2);
    return (power(number1-meanData,2) + power(number2-meanData,2)) / numbersCount;
}

double standardDeviation::variance(double number1, double number2, double number3)
{
    double meanData = mean(number1, number2, number3);
    return (power(number1-meanData,2) + power(number2-meanData,2) + power(number3-meanData,2)) / numbersCount;
}

double standardDeviation::variance(double number1, double number2, double number3, double number4)
{
    double meanData = mean(number1, number2, number3, number4);
    return (power(number1-meanData,2) + power(number2-meanData,2) + power(number3-meanData,2) + power(number4-meanData,2)) / numbersCount;
}
double standardDeviation::variance(vector<double> dataSet)
{
    double meanData = mean(dataSet);
    double sum = 0;
    for (size_t i = 0; i < numbersCount; i++)
    {
        sum += power(dataSet[i]-meanData,2);
    }
    return sum / numbersCount;
}

standardDeviation::~standardDeviation()
{
    numbersCount = 0;
    data.clear();
}