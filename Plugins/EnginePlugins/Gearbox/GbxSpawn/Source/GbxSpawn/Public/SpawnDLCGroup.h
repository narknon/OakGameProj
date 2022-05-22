#pragma once
#include "CoreMinimal.h"
#include "SpawnDLCGroupItem.h"
#include "SpawnDLCGroup.generated.h"

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnDLCGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnDLCGroupItem> Replacements;
    
    FSpawnDLCGroup();
};

