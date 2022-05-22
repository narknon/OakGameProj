#pragma once
#include "CoreMinimal.h"
#include "SceneComponentSwitchRecord.generated.h"

class USceneComponent;
class USceneBodySwitchAction;

USTRUCT(BlueprintType)
struct FSceneComponentSwitchRecord {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Component;
    
    UPROPERTY(Export)
    USceneComponent* ParentComponent;
    
    UPROPERTY()
    USceneBodySwitchAction* DetachAction;
    
    GBXGAMESYSTEMCORE_API FSceneComponentSwitchRecord();
};

