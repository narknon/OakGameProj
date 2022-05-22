#pragma once
#include "CoreMinimal.h"
#include "PlayerCharacterComponent.h"
#include "OperativeCharacterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOperativeCharacterComponent : public UPlayerCharacterComponent {
    GENERATED_BODY()
public:
    UOperativeCharacterComponent();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetOperativeDeviceVisible(bool bVisible);
    
};

