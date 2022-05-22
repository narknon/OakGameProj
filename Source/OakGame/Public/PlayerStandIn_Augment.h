#pragma once
#include "CoreMinimal.h"
#include "FrontendStandInAuxiliaryActorData.h"
#include "PlayerStandIn_Augment.generated.h"

class UGbxDataAsset;

USTRUCT(BlueprintType)
struct FPlayerStandIn_Augment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxDataAsset> Augment;
    
    UPROPERTY(EditAnywhere)
    FFrontendStandInAuxiliaryActorData ActorData;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDefault;
    
    OAKGAME_API FPlayerStandIn_Augment();
};

