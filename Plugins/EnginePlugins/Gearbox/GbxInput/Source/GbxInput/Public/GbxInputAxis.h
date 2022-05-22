#pragma once
#include "CoreMinimal.h"
#include "GbxInputKey.h"
#include "GbxInputAxisKey.h"
#include "GbxInputAxis.generated.h"

USTRUCT()
struct GBXINPUT_API FGbxInputAxis : public FGbxInputKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGbxInputAxisKey> Keys;
    
public:
    FGbxInputAxis();
};

