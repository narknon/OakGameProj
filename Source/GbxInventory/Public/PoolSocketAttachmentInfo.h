#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "PoolSocketAttachmentInfo.generated.h"

class UItemPoolData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FPoolSocketAttachmentInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UItemPoolData* ItemPool;
    
public:
    UPROPERTY(EditAnywhere)
    FName AttachmentPointName;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Weight;
    
    FPoolSocketAttachmentInfo();
};

