#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CreditsImageData.generated.h"

USTRUCT(BlueprintType)
struct FCreditsImageData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSoftObjectPath CreditsImage;
    
    UPROPERTY(EditDefaultsOnly)
    float ImageShowTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ImageMaxTime;
    
    OAKGAME_API FCreditsImageData();
};

