#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EOakMinimapIconComponentType.h"
#include "GFxMinimapWidgetIcon.h"
#include "InstancedPlayerOwnerInfo.h"
#include "OakMinimapIconComponent.generated.h"

class AOakCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakMinimapIconComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOakMinimapIconComponentType MinimapComponentType;
    
    UPROPERTY(EditAnywhere)
    FGFxMinimapWidgetIcon MinimapIconProperties;
    
    UPROPERTY(EditAnywhere)
    bool bBeginTrackinOnPlay;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_InstancedPlayerOwnerInfo)
    FInstancedPlayerOwnerInfo InstancedPlayerOwnerInfo;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsTracking)
    bool bIsTracking;
    
    UPROPERTY(Transient)
    bool bIsTrackingInternal;
    
    UPROPERTY(Transient)
    bool bIsInControl;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakCharacter> OakCharacterOwner;
    
public:
    UOakMinimapIconComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTracking();
    
private:
    UFUNCTION()
    void SetupTargetting();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTracking(bool bInTracking);
    
private:
    UFUNCTION()
    void OnRep_IsTracking();
    
    UFUNCTION()
    void OnRep_InstancedPlayerOwnerInfo();
    
    UFUNCTION()
    void OnCharacterDied();
    
    UFUNCTION()
    void DelayedUpdateIsTracking();
    
};

