#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BeamTargetEmptyActor.generated.h"

class USceneComponent;

UCLASS()
class OAKGAME_API ABeamTargetEmptyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* SceneRootComp;
    
protected:
    UPROPERTY(Replicated, Transient)
    AActor* BeamTarget;
    
private:
    UPROPERTY(Replicated, Transient)
    float FollowLerpSpeed;
    
public:
    ABeamTargetEmptyActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetBeamTarget(AActor* NewBeamTarget, float NewFollowLerpSpeed);
    
};

