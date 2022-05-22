#pragma once
#include "CoreMinimal.h"
#include "ResourcePoolSavegameData.generated.h"

class UGameResourceData;

USTRUCT(BlueprintType)
struct FResourcePoolSavegameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Amount;
    
private:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UGameResourceData> ResourcePath;
    
public:
    OAKGAME_API FResourcePoolSavegameData();
};

