#pragma once
#include "CoreMinimal.h"
#include "AINodeSmartObjectData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXAI_API FAINodeSmartObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    AActor* Object;
    
    UPROPERTY(VisibleInstanceOnly)
    float Distance;
    
    UPROPERTY(VisibleInstanceOnly)
    float Offset;
    
    FAINodeSmartObjectData();
};

