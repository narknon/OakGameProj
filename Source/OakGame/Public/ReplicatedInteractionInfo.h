#pragma once
#include "CoreMinimal.h"
#include "ReplicatedInteractionInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FReplicatedInteractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY()
    FName HandSocketName;
    
    UPROPERTY()
    bool bGhostedMaterialOn;
    
    UPROPERTY()
    bool bAttractEmitterOn;
    
    OAKGAME_API FReplicatedInteractionInfo();
};

