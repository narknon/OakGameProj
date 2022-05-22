#pragma once
#include "CoreMinimal.h"
#include "WeaponPreUseComponent.h"
#include "TargetingUpdateSignatureDelegate.h"
#include "EnvQueryParams.h"
#include "AttributeInitializationData.h"
#include "PaintedTarget.h"
#include "FalconStrikeTargetingComponent.generated.h"

class AActor;
class UInWorldIconData;
class ULightProjectile;
class AOakCharacter_Player;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFalconStrikeTargetingComponent : public UWeaponPreUseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTargetingUpdateSignature OnTargetAdded;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FName FallbackHUDIconSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    float HUDIconPatternSize;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* HUDIconData;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams TargetQueryParams;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData MaxTargetsData;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData TargetPaintingDuration;
    
    UPROPERTY()
    int32 MaxTargets;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPaintedTarget> PaintedTargets;
    
    UPROPERTY(Transient)
    AOakCharacter_Player* CachedOwnerPlayer;
    
public:
    UFalconStrikeTargetingComponent();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerResetTargetList();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddTarget(AActor* NewTarget);
    
    UFUNCTION()
    void PaintTargetFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRocketDestroyed(ULightProjectile* Rocket);
    
private:
    UFUNCTION()
    void ForceRemoveIconsDelayFinished();
    
};

