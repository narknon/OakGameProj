#pragma once
#include "CoreMinimal.h"
#include "MusicLayer.generated.h"

USTRUCT(BlueprintType)
struct FMusicLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterestMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterestMax;
    
    OAKGAME_API FMusicLayer();
};

