#include <stdio.h>
#include "brake.h"
#include "logger.h"

int brake_wear = 0; // Износ тормозов в %

void activate_brakes() {
    printf("🛑 Торможение...\n");
    brake_wear += 10;
    printf("⚠️ Износ тормозов: %d%%\n", brake_wear);

    log_event("Тормоза активированы!");

    if (brake_wear >= 100) {
        printf("❌ Тормоза полностью изношены! Требуется ремонт!\n");
        log_event("Тормоза полностью изношены!");
    }
}

void repair_brakes() {
    printf("🔧 Ремонт тормозов...\n");
    brake_wear = 0;
    printf("✅ Тормоза восстановлены!\n");

    log_event("Тормоза отремонтированы!");
}
