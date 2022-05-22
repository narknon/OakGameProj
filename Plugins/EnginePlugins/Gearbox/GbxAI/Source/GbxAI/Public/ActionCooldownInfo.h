#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "ActionCooldownInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActionCooldownInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY()
    FGameplayTag ActionTag;
    
    UPROPERTY()
    float CooldownTime;
    
    GBXAI_API FActionCooldownInfo();
};

