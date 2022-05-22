#pragma once
#include "CoreMinimal.h"
#include "PlayerStandInInitData.generated.h"

class UPlayerClassIdentifier;
class AOakPlayerController;

USTRUCT(BlueprintType)
struct FPlayerStandInInitData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPlayerClassIdentifier* PlayerClass;
    
    UPROPERTY()
    AOakPlayerController* OwnerPlayerController;
    
    OAKGAME_API FPlayerStandInInitData();
};

