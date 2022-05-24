#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "VaultCardGeneralData.generated.h"

UCLASS()
class OAKGAME_API UVaultCardGeneralData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FAttributeInitializationData> PerMayhemLevelXPScalars;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseLevelXPScalar;
    
    UPROPERTY(EditAnywhere)
    uint32 Version;
    
    UVaultCardGeneralData();
};

