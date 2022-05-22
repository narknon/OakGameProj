#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ERecentDamageFlags.h"
#include "RecentIncomingDamageData.generated.h"

class AActor;
class UDamageComponent;

USTRUCT(BlueprintType)
struct FRecentIncomingDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* DamageInstigator;
    
    UPROPERTY(Export, NotReplicated)
    UDamageComponent* DamageInstigatorDamageComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantize DamageInstigatorLocation;
    
    UPROPERTY(BlueprintReadOnly)
    float InitialDuration;
    
    UPROPERTY(BlueprintReadOnly)
    float DamageSeverity;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    float TimeRemaining;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWasJolt;
    
    UPROPERTY(BlueprintReadOnly)
    ERecentDamageFlags Flags;
    
    UPROPERTY()
    uint8 InstanceId;
    
    OAKGAME_API FRecentIncomingDamageData();
};

