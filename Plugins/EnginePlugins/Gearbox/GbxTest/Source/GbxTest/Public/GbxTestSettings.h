#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxTestSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UGbxTestSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> TestContentPaths;
    
    UGbxTestSettings();
};

