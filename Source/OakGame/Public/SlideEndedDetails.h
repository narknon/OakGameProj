#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SlideEndedDetails.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSlideEndedDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* HitActor;
    
    UPROPERTY(BlueprintReadOnly)
    FVector StopVelocity;
    
    OAKGAME_API FSlideEndedDetails();
};

