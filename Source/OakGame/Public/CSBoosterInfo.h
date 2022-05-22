#pragma once
#include "CoreMinimal.h"
#include "CSBoosterInfo.generated.h"

class UStatusEffectData;
class UTexture;

USTRUCT(BlueprintType)
struct OAKGAME_API FCSBoosterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName NameId;
    
    UPROPERTY()
    FString AnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FString BoosterTextureName;
    
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(EditDefaultsOnly)
    FText UnlockDescription;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Price;
    
    UPROPERTY(EditDefaultsOnly)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float EffectDuration;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* Icon;
    
    FCSBoosterInfo();
};

