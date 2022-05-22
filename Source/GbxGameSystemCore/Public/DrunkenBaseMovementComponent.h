#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DrunkenBaseMovementComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UDrunkenBaseMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartApproachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseInTime;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 RandomNumberSeed;
    
    UDrunkenBaseMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

