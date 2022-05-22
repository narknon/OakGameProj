#pragma once
#include "CoreMinimal.h"
#include "EBossbarEventType.h"
#include "BossbarEventData.generated.h"

class AOakCharacter;

USTRUCT(BlueprintType)
struct FBossbarEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EBossbarEventType Type;
    
    UPROPERTY(Transient)
    AOakCharacter* Boss;
    
    OAKGAME_API FBossbarEventData();
};

