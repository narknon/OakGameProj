#pragma once
#include "CoreMinimal.h"
#include "GbxCustomizationComponent.h"
#include "OakCustomizationComponent.generated.h"

class UOakCustomizationData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakCustomizationComponent : public UGbxCustomizationComponent {
    GENERATED_BODY()
public:
    UOakCustomizationComponent();
    UFUNCTION(BlueprintCallable)
    void GetAvailableCustomizationData(TArray<UOakCustomizationData*>& UnlockedCustomizations, TArray<UOakCustomizationData*>& LockedCustomizations);
    
};

