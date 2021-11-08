#include "func.h"
#include <stdlib.h>
int main(void)
{
    int operator;
    printf("Выберите задание 1 или 2: ");
    scanf("%d", &operator);
    double x, y;
     switch(operator)
	 {
        case 1:
            printf("Введите x = ");
            scanf("%lf",&x);
            printf("Введите y = ");
            scanf("%lf",&y);
            if (isInArea(x,y))
                printf("Точка в области\n");
            else
                printf("Точка НЕ в области\n");
            break;                 
            
        case 2:            
            printf("Введите x = ");
            scanf("%lf",&x); 
            printf("%lf\n", f(x));
            break;
        default: 
            printf("Ошибка\n");
            break;
    }
	system("pause");
}