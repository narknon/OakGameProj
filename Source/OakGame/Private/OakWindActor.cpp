#include "OakWindActor.h"
#include "Net/UnrealNetwork.h"

class UObject;

void AOakWindActor::OnRep_RepGust() {
}

void AOakWindActor::OnRep_RepDirection() {
}

FLinearColor AOakWindActor::GetWindVectorFieldAtLocation(UObject* WorldContextObject, FVector InLocation) {
    return FLinearColor{};
}

FVector AOakWindActor::GetWindDirectionAtLocation(UObject* WorldContextObject, FVector InLocation, float& Speed) {
    return FVector{};
}

void AOakWindActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakWindActor, RepDirection);
    DOREPLIFETIME(AOakWindActor, RepGust);
}

AOakWindActor::AOakWindActor() {
    this->MaxVariationAngleBetweenGusts = 30.00f;
    this->MaxVariationAngle = 60.00f;
    this->GustFalloffDurationPercent = 0.66f;
    this->ChanceToReGust = 0.50f;
    this->MinWindSpeed = 0.20f;
    this->MaxWindSpeed = 1.00f;
    this->PreviewStrength = 0.25f;
    this->BaseWindSpeed = 1.50f;
    this->BaseMinGust = 1.00f;
    this->BaseMaxGust = 10.00f;
    this->bUseYawJitter = false;
    this->RotationJitterAngle = 3.00f;
    this->RotationJitterFrequency = 8.00f;
    this->UniversalMaterialParameterCollection = NULL;
    this->WindStrength_MaterialParameterName = TEXT("Wind_Strength");
    this->WindSpeed_MaterialParameterName = TEXT("Wind_Speed");
    this->WindDirection_MaterialParameterName = TEXT("WindDirection");
    this->MinGustAmount_MaterialParameterName = TEXT("Wind_MinGustAmount");
    this->MaxGustAmount_MaterialParameterName = TEXT("Wind_MaxGustAmount");
    this->CurrentWindSpeed = 0.00f;
}

