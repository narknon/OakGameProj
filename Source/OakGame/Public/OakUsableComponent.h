#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "OakUsableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakUsableComponent : public UUsableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bForDisplayOnly;
    
public:
    UOakUsableComponent();
};

