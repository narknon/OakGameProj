#pragma once
#include "CoreMinimal.h"
#include "AINodeSmartObjectData.h"
#include "AINodeLink.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXAI_API FAINodeLink {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float Weight;
    
    UPROPERTY(EditInstanceOnly)
    float PrevWeight;
    
    UPROPERTY(EditInstanceOnly)
    AActor* Actor;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FAINodeSmartObjectData> SmartObjects;
    
    FAINodeLink();
};

