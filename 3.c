#include <stdio.h>

typedef struct Move
{
    int a;
    int b;
} Move;


// Функция для получения конечной точки
Move Movement(struct Move arr[], int n)
{
    Move result = {0, 0}; // Инициализация начальных координат (0, 0) для конечной точки
    for (int i = 0; i < n; i++)
    {
        result.a += arr[i].a; // + координата a текущего движения к конечной точке a
        result.b += arr[i].b; // + координата b текущего движения к конечной точке b
    }
    return result;
}


int main()
{
    int n;
    scanf("%d", &n); // Ввод кол-ва движений

    // Здесь должен быть код для заполнения массива структур Move и вызов функции Movement для получения конечной точки

    return 0;
}
