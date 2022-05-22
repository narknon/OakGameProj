#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityAllyQueryResult.generated.h"

class AOakCharacter_Player;
class AActor;

USTRUCT(BlueprintType)
struct FOakPlayerAbilityAllyQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<AOakCharacter_Player*> Allies;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> Companions;
    
    OAKGAME_API FOakPlayerAbilityAllyQueryResult();
};

