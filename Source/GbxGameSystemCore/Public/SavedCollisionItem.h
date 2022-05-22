#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SavedCollisionItem.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSavedCollisionItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPrimitiveComponent* Primitive;
    
    UPROPERTY()
    FCollisionResponseContainer Responses;
    
    FSavedCollisionItem();
};

