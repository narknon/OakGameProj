#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GoreRegionState.generated.h"

class UGoreDamageData;

USTRUCT(BlueprintType)
struct FGoreRegionState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGoreDamageData* GoreData;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideStumpSocket: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideRootDamageBone: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideStumpBoneScale: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideLimbSocket: 1;
    
    UPROPERTY(EditAnywhere)
    FName StumpSocket;
    
    UPROPERTY(EditAnywhere)
    FVector StumpBoneScale;
    
    UPROPERTY(EditAnywhere)
    FName RootDamageBone;
    
    UPROPERTY(EditAnywhere)
    FName LimbSocket;
    
    UPROPERTY(EditAnywhere)
    float LimbScale;
    
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    OAKGAME_API FGoreRegionState();
};

