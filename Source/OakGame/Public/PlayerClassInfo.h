#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerClassInfo.generated.h"

class UPlayerClassIdentifier;

USTRUCT(BlueprintType)
struct FPlayerClassInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName PlayerStandInActorName;
    
    UPROPERTY(EditDefaultsOnly)
    FName ActorSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D TextOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D DefaultPosition;
    
    UPROPERTY(EditDefaultsOnly)
    UPlayerClassIdentifier* PlayerClassId;
    
    OAKGAME_API FPlayerClassInfo();
};

