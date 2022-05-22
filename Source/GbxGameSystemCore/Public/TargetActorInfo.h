#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "TargetActorInfo.generated.h"

class AActor;
class USceneComponent;
class UTargetableComponent;
class UTargetingComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FTargetActorInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> Target;
    
public:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> Proxy;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UTargetableComponent> TargetableComponent;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UTargetingComponent> OwnerTargetingComponent;
    
    UPROPERTY(BlueprintReadOnly)
    float TargetScore;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ETeamAttitude::Type> AttitudeTowardTarget;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ETeamAttitude::Type> AttitudeFromTarget;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TargetListIndex;
    
    FTargetActorInfo();
};

