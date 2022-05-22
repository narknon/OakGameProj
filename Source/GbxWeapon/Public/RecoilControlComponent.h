#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RecoilControlEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "RecoilControlComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API URecoilControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRecoilControlEvent NotifyRecoveryFinished;
    
    UPROPERTY(BlueprintAssignable)
    FRecoilControlEvent NotifyResetRecoil;
    
protected:
    UPROPERTY()
    bool bServerSimulatesRecoil;
    
    UPROPERTY(Transient)
    FRotator CurrentRotation;
    
    UPROPERTY(Transient)
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator InputPassthroughThreshold;
    
public:
    URecoilControlComponent();
protected:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerApplyInput(uint32 CompressedInputRot);
    
};

