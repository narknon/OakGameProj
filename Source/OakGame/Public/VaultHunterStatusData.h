#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "VaultHunterStatusData.generated.h"

UCLASS(EditInlineNew)
class UVaultHunterStatusData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(EditAnywhere)
    FString Icon;
    
    UVaultHunterStatusData();
};

