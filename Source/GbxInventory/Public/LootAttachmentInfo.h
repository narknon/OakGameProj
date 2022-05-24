#pragma once
#include "CoreMinimal.h"
#include "PoolSocketAttachmentInfo.h"
#include "AttributeInitializationData.h"
#include "LootAttachmentInfo.generated.h"

class UItemPoolData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FLootAttachmentInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UItemPoolData* ItemPool;
    
public:
    UPROPERTY(EditAnywhere)
    FName AttachmentPointName;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Probability;
    
    UPROPERTY(EditAnywhere)
    TArray<FPoolSocketAttachmentInfo> OverrideAttachmentList;
    
    FLootAttachmentInfo();
};

