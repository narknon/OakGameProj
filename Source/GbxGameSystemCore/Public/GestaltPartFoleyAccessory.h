#pragma once
#include "CoreMinimal.h"
#include "GestaltPartFoleyAccessory.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FGestaltPartFoleyAccessory {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    int32 Priority;
    
    UPROPERTY(EditInstanceOnly)
    UWwiseEvent* WwiseEvent;
    
    UPROPERTY(EditInstanceOnly)
    FName AttachmentPoint;
    
    GBXGAMESYSTEMCORE_API FGestaltPartFoleyAccessory();
};

