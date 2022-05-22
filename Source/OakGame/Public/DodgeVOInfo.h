#pragma once
#include "CoreMinimal.h"
#include "DodgeVOInfo.generated.h"

class UDialogEvent;
class UCharacterSoundTag;

USTRUCT(BlueprintType)
struct FDodgeVOInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogEvent* DialogEvent;
    
    UPROPERTY(EditAnywhere)
    UCharacterSoundTag* VocalizationTag;
    
    OAKGAME_API FDodgeVOInfo();
};

