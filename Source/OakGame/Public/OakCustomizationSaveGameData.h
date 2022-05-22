#pragma once
#include "CoreMinimal.h"
#include "OakCustomizationSaveGameData.generated.h"

class UOakCustomizationData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCustomizationSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsNew;
    
private:
    UPROPERTY()
    TSoftObjectPtr<UOakCustomizationData> CustomizationAssetPath;
    
public:
    FOakCustomizationSaveGameData();
};

