#pragma once
#include "CoreMinimal.h"
#include "PreviewState.h"
#include "SmartObjectPreviewState.generated.h"

class UAIUseSlotComponent;
class USpawnFactory;

USTRUCT(BlueprintType)
struct FSmartObjectPreviewState : public FPreviewState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UAIUseSlotComponent* AIUseSlotComponent;
    
    UPROPERTY()
    TArray<USpawnFactory*> PreviewFactories;
    
public:
    GBXAI_API FSmartObjectPreviewState();
};

