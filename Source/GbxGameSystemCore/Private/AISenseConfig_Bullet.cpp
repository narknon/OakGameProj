#include "AISenseConfig_Bullet.h"
#include "AISense_Bullet.h"

UAISenseConfig_Bullet::UAISenseConfig_Bullet() {
    this->Implementation = UAISense_Bullet::StaticClass();
    this->ListenRadius = 750.00f;
}

