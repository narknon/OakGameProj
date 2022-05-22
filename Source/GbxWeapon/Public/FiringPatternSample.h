#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FiringPatternSample.generated.h"

USTRUCT(BlueprintType)
struct FFiringPatternSample {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRotator StartRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator EndRotation;
    
    UPROPERTY()
    bool bUseEndRotation;
    
    UPROPERTY()
    bool bUseID;
    
    UPROPERTY(EditAnywhere)
    uint8 ID;
    
    GBXWEAPON_API FFiringPatternSample();
};

