#include "TimeOfDayActor.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyLightComponent.h"
#include "TimeOfDayComponent.h"
#include "Atmosphere/AtmosphericFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/StaticMeshComponent.h"

class UObject;

UDirectionalLightComponent* ATimeOfDayActor::GetDirectionalLightComponent() {
    return NULL;
}

void ATimeOfDayActor::EnumerateLayerNames(TArray<FName>& OutLayerNames) const {
}

void ATimeOfDayActor::AddEventListener(UObject* InListener) {
}

ATimeOfDayActor::ATimeOfDayActor() {
    this->TimeOfDayComponent = CreateDefaultSubobject<UTimeOfDayComponent>(TEXT("TimeOfDayComponent0"));
    this->DirectionalLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("TimeOfDay_DirectionalLightComponent0"));
    this->SkyLightComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("TimeOfDay_SkyLightComponent0"));
    this->AtmosphericFogComponent = CreateDefaultSubobject<UAtmosphericFogComponent>(TEXT("TimeOfDay_AtmosphericFogComponent0"));
    this->ExponentialHeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("TimeOfDay_ExponentialHeightFogComponent0"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TimeOfDay_StaticMeshComponent0"));
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("TimeOfDay_PostProcessComponent0"));
    this->StartTime = 0.00f;
}

