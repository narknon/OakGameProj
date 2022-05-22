#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HitReactionLayer.generated.h"

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UHitReactionLayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bStackable;
    
    UHitReactionLayer();
};

