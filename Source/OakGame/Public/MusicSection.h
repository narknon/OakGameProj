#pragma once
#include "CoreMinimal.h"
#include "EOakMusicPart.h"
#include "MusicPart.h"
#include "MusicSection.generated.h"

USTRUCT(BlueprintType)
struct FMusicSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CombatMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CombatMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EOakMusicPart, FMusicPart> AssociatedMusicParts;
    
    OAKGAME_API FMusicSection();
};

