#pragma once
#include "CoreMinimal.h"
#include "GbxGFxmovieClipAppendixItem.h"
#include "GbxGFxMovieClipAppendix.generated.h"

USTRUCT(BlueprintType)
struct FGbxGFxMovieClipAppendix {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxGFxmovieClipAppendixItem DefaultRetVal;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FGbxGFxmovieClipAppendixItem> AppendixMap;
    
    GBXUI_API FGbxGFxMovieClipAppendix();
};

