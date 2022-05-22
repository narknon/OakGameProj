#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterMoveToCommand.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCharacterMoveToCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bContinuouslyUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bEnforceMaxSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bEnforceMaxSpeedOnEnding: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bMoveZAxis: 1;
    
    FCharacterMoveToCommand();
};

