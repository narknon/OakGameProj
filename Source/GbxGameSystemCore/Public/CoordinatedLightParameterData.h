#pragma once
#include "CoreMinimal.h"
#include "CoordinatedScalarParameter.h"
#include "CoordinatedVectorParameter.h"
#include "CoordinatedLightParameterData.generated.h"

USTRUCT(BlueprintType)
struct FCoordinatedLightParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName LightName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bSetColor: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bSetIntensity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FCoordinatedVectorParameter Color;
    
    UPROPERTY(EditDefaultsOnly)
    FCoordinatedScalarParameter Intensity;
    
    GBXGAMESYSTEMCORE_API FCoordinatedLightParameterData();
};

