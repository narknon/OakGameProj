#pragma once
#include "CoreMinimal.h"
#include "TextMarkupDictionaryEntry.generated.h"

USTRUCT(BlueprintType)
struct FTextMarkupDictionaryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString OutputText;
    
    UPROPERTY(EditAnywhere)
    bool bRequiresEndSection;
    
    GBXUI_API FTextMarkupDictionaryEntry();
};

