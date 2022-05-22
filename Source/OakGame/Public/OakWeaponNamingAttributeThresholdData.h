#pragma once
#include "CoreMinimal.h"
#include "OakWeaponNamingAttributeThresholdData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakWeaponNamingAttributeThresholdData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName AttributeName;
    
    UPROPERTY(EditAnywhere)
    float FirstThreshold;
    
    UPROPERTY(EditAnywhere)
    float SecondThreshold;
    
    FOakWeaponNamingAttributeThresholdData();
};

