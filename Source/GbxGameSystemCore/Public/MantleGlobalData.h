#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "MantleGlobalData.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FMantleGlobalData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 DistanceToLookAheadForWalls;
    
    UPROPERTY(EditAnywhere)
    float FootCollisionHeight;
    
    UPROPERTY(EditAnywhere)
    float HeadCollisionHeight;
    
    UPROPERTY(EditAnywhere)
    float MinWallSlope;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleToKeepMantleCache;
    
    UPROPERTY(EditAnywhere)
    float TimeToHoldValidClimbLocationSeconds;
    
    UPROPERTY(EditAnywhere)
    float MaxDegreeAngleFromForward;
    
    UPROPERTY(EditAnywhere)
    float LookAngleRange;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowPromptWhenAvailable: 1;
    
    UPROPERTY(EditAnywhere)
    float DelayBeforeShowingPrompt;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> ValidActorClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> InvalidActorClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UPrimitiveComponent>> ValidPrimitiveComponentClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EMovementMode>> ValidMovementModes;
    
    UPROPERTY(EditAnywhere)
    float MaxAscendingSpeedZ;
    
    UPROPERTY(EditAnywhere)
    float MaxDescendingSpeedZ;
    
    UPROPERTY(EditAnywhere)
    float MinLedgeHeightToStillAllowMantle;
    
    UPROPERTY(EditAnywhere)
    float MaxPossibleLedgeHeight;
    
    UPROPERTY(EditAnywhere)
    float MaxPossibleLedgeDistance;
    
    UPROPERTY(EditAnywhere)
    float ClientValidationTolerance;
    
    UPROPERTY(EditAnywhere)
    float MinPassiveMantleHeight_Default;
    
    UPROPERTY(EditAnywhere)
    float MinPassiveMantleHeight_ForwardInput;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreTeamCollision;
    
    FMantleGlobalData();
};

