#include "func.h"
_Bool isInArea (double x, double y){
    if (((x >= 0 && x <= 1) && (y >= 0 && y <= 1)) || 
   ((x >= 0 && x <= 1) && (sqrt(1 - x * x) * -1 <= y)))
    {
         return 1;
    }
    return 0;
}