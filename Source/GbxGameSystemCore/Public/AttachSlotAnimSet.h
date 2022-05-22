#pragma once
#include "CoreMinimal.h"
#include "AttachSlotAnimSet.generated.h"

class UObject;
class UGbxAnimSet;

USTRUCT(BlueprintType)
struct FAttachSlotAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UObject> AssociatedCharacter;
    
    UPROPERTY(EditAnywhere)
    UGbxAnimSet* AnimSet;
    
    GBXGAMESYSTEMCORE_API FAttachSlotAnimSet();
};

