#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "ETimedUpdateBehavior.h"
#include "EQueryOwnerLocationUse.h"
#include "GbxQueryOriginOptions.h"
#include "GbxQueryOptions.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxQueryOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EQueryOwnerLocationUse OwnerLocationUse;
    
    UPROPERTY(EditAnywhere)
    float ReplaceLastResultThreshold;
    
    UPROPERTY()
    bool bReplaceLastResult;
    
    UPROPERTY(EditAnywhere)
    bool bKeepValidValues;
    
    UPROPERTY(EditAnywhere)
    float MinUpdatePeriod;
    
    UPROPERTY(EditAnywhere)
    float PauseUpdatesWhenNotPingedForTime;
    
    UPROPERTY()
    bool bUpdateAlways;
    
    UPROPERTY(EditAnywhere)
    ETimedUpdateBehavior WhenToDoFullQueryUpdates;
    
    UPROPERTY(EditAnywhere)
    bool bCanUpdateWhileActive;
    
    UPROPERTY(EditAnywhere)
    FGbxParam OwnerMoveThreshold;
    
    UPROPERTY()
    bool bUpdateWhenOwnerMoves;
    
    UPROPERTY(EditAnywhere)
    FGbxParam PrimaryContextMoveThreshold;
    
    UPROPERTY()
    bool bUpdateWhenPrimaryContextMoves;
    
    UPROPERTY(EditAnywhere)
    FGbxQueryOriginOptions Origin;
    
    UPROPERTY()
    bool bUpdateOrigin;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyUpdateWhenCanPath;
    
    UPROPERTY()
    bool bUpdateWhenHotSpotsListChanges;
    
    FGbxQueryOptions();
};

