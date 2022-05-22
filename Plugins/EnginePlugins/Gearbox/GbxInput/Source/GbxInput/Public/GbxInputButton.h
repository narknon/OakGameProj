#pragma once
#include "CoreMinimal.h"
#include "GbxInputKey.h"
#include "InputCoreTypes.h"
#include "GbxInputButton.generated.h"

USTRUCT()
struct GBXINPUT_API FGbxInputButton : public FGbxInputKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FKey> Keys;
    
public:
    FGbxInputButton();
};

