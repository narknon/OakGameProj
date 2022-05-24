#pragma once
#include "CoreMinimal.h"
#include "OakResourceEffectData.h"
#include "GameResourcePoolReference.h"
#include "ResourceLock.h"
#include "ActiveOakResourceEffect.generated.h"

USTRUCT(BlueprintType)
struct FActiveOakResourceEffect {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOakResourceEffectData ResourceEffectData;
    
    UPROPERTY()
    FGameResourcePoolReference ResourcePoolReference;
    
    UPROPERTY(NotReplicated)
    FResourceLock ResourceLock;
    
    OAKGAME_API FActiveOakResourceEffect();
};

