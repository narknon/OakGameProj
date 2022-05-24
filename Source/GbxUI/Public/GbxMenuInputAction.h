#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuInputActionTrigger.h"
#include "InputCoreTypes.h"
#include "GbxMenuInputAction.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxMenuInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ActionName;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> Keys;
    
    UPROPERTY(EditAnywhere)
    EGbxMenuInputActionTrigger ActionTrigger;
    
    UPROPERTY(EditAnywhere)
    bool bWantsRepeat;
    
    FGbxMenuInputAction();
};

