#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakNPCMailData.generated.h"

class UItemPoolData;

UCLASS(EditInlineNew)
class OAKGAME_API UOakNPCMailData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText SenderDisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Subject;
    
    UPROPERTY(EditAnywhere)
    FText Body;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolData* ItemPoolReward;
    
    UOakNPCMailData();
};

