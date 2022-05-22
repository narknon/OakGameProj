#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuCommandItemData.h"
#include "DebugMenuCategoryConfig.generated.h"

UCLASS()
class UDebugMenuCategoryConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TArray<FDebugMenuCommandItemData> ConfigExecData;
    
    UDebugMenuCategoryConfig();
};

