#include "SpawnPerformance_10SMC.h"
#include "Components/StaticMeshComponent.h"

ASpawnPerformance_10SMC::ASpawnPerformance_10SMC() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponent1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent1"));
    this->StaticMeshComponent2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent2"));
    this->StaticMeshComponent3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent3"));
    this->StaticMeshComponent4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent4"));
    this->StaticMeshComponent5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent5"));
    this->StaticMeshComponent6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent6"));
    this->StaticMeshComponent7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent7"));
    this->StaticMeshComponent8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent8"));
    this->StaticMeshComponent9 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent9"));
}

