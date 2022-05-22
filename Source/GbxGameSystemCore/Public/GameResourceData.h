#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GameResourceData.generated.h"

class UGameResourcePoolData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGameResourceData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ResourceName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIntegerOnlyUpdates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSerializeInSavegame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameResourcePoolData* DefaultResourcePoolData;
    
    UGameResourceData();
};

