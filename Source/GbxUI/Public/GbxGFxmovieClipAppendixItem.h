#pragma once
#include "CoreMinimal.h"
#include "GbxGFxmovieClipAppendixItem.generated.h"

USTRUCT(BlueprintType)
struct FGbxGFxmovieClipAppendixItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> ClipPaths;
    
    GBXUI_API FGbxGFxmovieClipAppendixItem();
};

