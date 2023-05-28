#include <stdio.h>

struct Person
{
    int age;
    char name[30];
};

// Функция для нахождения среднего возраста
float calculateAverageAge(struct Person arr[], int count)
{
    int totalAge = 0;
    for (int i = 0; i < count; i++)
    {
        totalAge += arr[i].age;
    }
    float average = (float)totalAge / (float)count;
    return average;
}

int main()
{
    int count;
    scanf("%d", &count);  // Ввод количества фрагментов

    // Код для заполнения массива Person и вызов функции calculateAverageAge для нахождения среднего возраста

    return 0;
}


