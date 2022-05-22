#pragma once
#include "CoreMinimal.h"
#include "EDamageReactionEventType.h"
#include "DamageReactionEvent_DamageComponent.generated.h"

class UGameResourcePoolData;
class UDamageFilter;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FDamageReactionEvent_DamageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY(EditAnywhere)
    UGameResourcePoolData* HealthPool;
    
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
    
    FDamageReactionEvent_DamageComponent();
};

