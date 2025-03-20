#include <stdio.h>
#include "traction_control.h"

int main() {
    printf("Locomotive Control System initialized!\n");

    // Вызываем функцию для проверки состояния тяги
    print_traction_status();

    return 0;
}
