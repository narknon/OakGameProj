#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HardPointSlotSettings.generated.h"

class UGbxAction_CoordinatedEffect;

USTRUCT(BlueprintType)
struct FHardPointSlotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AnimationSlotName;
    
    UPROPERTY(EditAnywhere)
    FName CESlotName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> HardPointSelectedCE;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> HardpointPreviewCE;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> HardPointEquippedCE;
    
    OAKGAME_API FHardPointSlotSettings();
};

