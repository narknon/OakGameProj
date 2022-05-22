#pragma once
#include "CoreMinimal.h"
#include "EBehindTheScenesItemType.h"
#include "BehindTheScenesItem.generated.h"

class UBehindTheScenesMediaContainer;
class UTexture;

USTRUCT(BlueprintType)
struct FBehindTheScenesItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBehindTheScenesMediaContainer* Content;
    
    UPROPERTY(EditAnywhere)
    FText MediaLabelText;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> ThumbnailTexture;
    
    UPROPERTY(EditAnywhere)
    EBehindTheScenesItemType ItemType;
    
    OAKGAME_API FBehindTheScenesItem();
};

