#pragma once
#include "CoreMinimal.h"
#include "MantleActiveActionData.h"
#include "MantleTraceCheck.h"
#include "MantleState.generated.h"

class UGbxCharacterMovementComponent;
class UMantleData;
class UGbxGameplayGlobals;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FMantleState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* MovementComponentOwner;
    
    UPROPERTY(Transient)
    UMantleData* MantleData;
    
    UPROPERTY(Transient)
    UGbxGameplayGlobals* GameplayGlobals;
    
    UPROPERTY(Transient)
    FMantleActiveActionData ActiveActionData;
    
    UPROPERTY(Transient)
    FMantleTraceCheck CurrentTrace;
    
public:
    FMantleState();
};

