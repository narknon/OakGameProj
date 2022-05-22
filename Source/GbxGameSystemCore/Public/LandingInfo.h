#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LandingInfo.generated.h"

class UImpactData;
class UGbxAction;
class UCharacterSoundTag;

USTRUCT(BlueprintType)
struct FLandingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNoMinVelIfJumped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LandedMinVel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UImpactData* LandedImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlayLandedImpactAtSpecificFeet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGbxAction> LandedAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCharacterSoundTag* VocalizationTag;
    
    GBXGAMESYSTEMCORE_API FLandingInfo();
};

