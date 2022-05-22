#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxEasingFunc.h"
#include "CharacterRotateToCommand.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCharacterRotateToCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite)
    FName TargetSocket;
    
    UPROPERTY(BlueprintReadWrite)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite)
    bool bFreezeRotation;
    
    UPROPERTY(BlueprintReadWrite)
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float MaxYawRate;
    
    UPROPERTY(BlueprintReadWrite)
    float MaxPitchRate;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUseEasing;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxEasingFunc Easing;
    
    FCharacterRotateToCommand();
};

