#pragma once
#include "CoreMinimal.h"
#include "MusicInterestASR.generated.h"

USTRUCT(BlueprintType)
struct FMusicInterestASR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SustainValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SustainTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecayTimeSeconds;
    
    OAKGAME_API FMusicInterestASR();
};

