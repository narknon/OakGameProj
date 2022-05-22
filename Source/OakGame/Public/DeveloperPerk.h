#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "DeveloperPerk.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FDeveloperPerk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> KeyCombo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 PerkTypeEnumIdx;
    
    FDeveloperPerk();
};

