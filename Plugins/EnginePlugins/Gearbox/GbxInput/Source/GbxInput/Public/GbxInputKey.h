#pragma once
#include "CoreMinimal.h"
#include "GbxInputKey.generated.h"

USTRUCT()
struct GBXINPUT_API FGbxInputKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName KeyName;
    
public:
    FGbxInputKey();
};

