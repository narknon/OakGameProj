#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VehicleBoostData.h"
#include "OakVehicleBoostData.generated.h"

class UDamageData;
class UFeedbackData;
class UStatusEffectData;

UCLASS()
class UOakVehicleBoostData : public UVehicleBoostData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFeedbackData* StartBoostFeedback;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* BoostLoopFeedback;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* BoostStatusEffectData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> BoostDamageData;
    
    UPROPERTY(EditAnywhere)
    float BoostDamageTickInterval;
    
    UPROPERTY(EditAnywhere)
    FName DamagePrimCompTag;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> BoostCollisionDamageData;
    
    UOakVehicleBoostData();
};

