#pragma once
#include "CoreMinimal.h"
#include "EDamageReactionEventType.h"
#include "DamageReactionEvent.generated.h"

class UDamageFilter;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FDamageReactionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY(EditAnywhere)
    float EventHealthPercent;
    
    UPROPERTY(EditAnywhere)
    EDamageReactionEventType EVENTTYPE;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageFilter* Filter;
    
    UPROPERTY(EditAnywhere)
    float DamageTime;
    
    UPROPERTY(EditAnywhere)
    float RetriggerDelay;
    
    UPROPERTY(EditAnywhere)
    int32 MaxTriggerCount;
    
    UPROPERTY(EditAnywhere)
    FName DamageBoneName;
    
    UPROPERTY(EditAnywhere)
    uint8 bIncludeDamageBoneChildren: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCensored: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTriggerOnlyOnDeath: 1;
    
    FDamageReactionEvent();
};

