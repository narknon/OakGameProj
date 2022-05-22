#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OakDuelingWidgetTotemComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakDuelingWidgetTotemComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UOakDuelingWidgetTotemComponent();
    UFUNCTION(BlueprintCallable)
    void DeinitTotem();
    
};

