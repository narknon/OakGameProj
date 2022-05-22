#pragma once
#include "CoreMinimal.h"
#include "RebindContextAndDescription.generated.h"

class UGbxInputRebindContext;
class UOptionDescriptionItem;

USTRUCT(BlueprintType)
struct OAKGAME_API FRebindContextAndDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText SchemeName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxInputRebindContext> RebindContext;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> Description;
    
    FRebindContextAndDescription();
};

