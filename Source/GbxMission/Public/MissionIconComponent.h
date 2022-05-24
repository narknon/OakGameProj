#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionIconEnabledDelegateDelegate.h"
#include "Components/PrimitiveComponent.h"
#include "MissionIconInterface.h"
#include "MissionObjectiveReferenceInterface.h"
#include "MissionObserverInterface.h"
#include "MissionReferenceInterface.h"
#include "EIconRadiusDrawStyle.h"
#include "UObject/NoExportTypes.h"
#include "EMissionIconState.h"
#include "MissionIconComponent.generated.h"

class UParticleSystem;
class UGbxCondition;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXMISSION_API UMissionIconComponent : public UPrimitiveComponent, public IMissionObserverInterface, public IMissionObjectiveReferenceInterface, public IMissionIconInterface, public IMissionReferenceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGbxCondition* IconEnabledCondition;
    
    UPROPERTY(EditAnywhere)
    uint32 WaypointRadius;
    
    UPROPERTY(EditAnywhere)
    bool bHideAreaWaypoint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPrimitiveComponent> AreaComponentClassOverride;
    
    UPROPERTY(EditAnywhere)
    EIconRadiusDrawStyle DrawStyle;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* AttractParticleTemplate;
    
    UPROPERTY(EditAnywhere)
    FTransform AttractParticleTransform;
    
    UPROPERTY(EditAnywhere)
    bool bSyncAttachedParticles;
    
    UPROPERTY(EditAnywhere)
    bool bAttachToWaypointSocket;
    
    UPROPERTY(BlueprintAssignable)
    FMissionIconEnabledDelegate OnIconEnabled;
    
    UPROPERTY(BlueprintAssignable)
    FMissionIconEnabledDelegate OnIconDisabled;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Enabled)
    bool bEnabled;
    
public:
    UMissionIconComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIconState(TEnumAsByte<EMissionIconState> InState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetIconEnabledCondition(UGbxCondition* EnabledCondition);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDisabledState(bool bDisabled);
    
private:
    UFUNCTION()
    void OnRep_Enabled(bool bPreviouslyEnabled);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsIconEnabled();
    
    UFUNCTION()
    UClass* GetRequiredInterface();
    
    UFUNCTION()
    bool EnabledConditionRequiresNativeClass();
    
    
    // Fix for true pure virtual functions not being implemented
};

