#pragma once
#include "CoreMinimal.h"
#include "EOakMusicLayer.h"
#include "MusicLayer.h"
#include "MusicPart.generated.h"

USTRUCT(BlueprintType)
struct FMusicPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UpdateIntervalInBeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterestMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterestMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EOakMusicLayer, FMusicLayer> AssociatedMusicLayers;
    
    OAKGAME_API FMusicPart();
};

