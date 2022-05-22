#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChallengeManager.generated.h"

class UGameStatData;

UCLASS()
class GBXGAMESYSTEMCORE_API AChallengeManager : public AActor {
    GENERATED_BODY()
public:
    AChallengeManager();
    UFUNCTION()
    void OnStatIncrement(AActor* StatContext, UGameStatData* StatId, int32 Amount);
    
};

