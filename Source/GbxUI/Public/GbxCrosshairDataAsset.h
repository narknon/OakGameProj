#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "EChargeClipState.h"
#include "GbxCrosshairDataAsset.generated.h"

class AActor;

UCLASS()
class UGbxCrosshairDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString CrosshairFrameName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> CrosshairActorClass;
    
    UPROPERTY(EditAnywhere)
    bool bHideMinSpreadReticle;
    
    UPROPERTY(EditAnywhere)
    bool bHideAccuracyReticle;
    
    UPROPERTY(EditAnywhere)
    EChargeClipState ChargeClipState;
    
    UGbxCrosshairDataAsset();
};

