#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "BMPOverride.h"
#include "ImpactDataOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneModInstance -FallbackName=BoneModInstance
#include "ReplicatedGestaltPartsData.h"
#include "StretchBonesInstance.h"
#include "BoneModifyProfileData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GaitScalingSettings -FallbackName=GaitScalingSettings
#include "StretchAnimData.h"
#include "Engine/EngineTypes.h"
#include "GbxAnimPoseMatch.h"
#include "GbxSkeletalMeshComponent.generated.h"

class UGbxBoneModifyProfile;
class UGestaltPartData_Mesh;
class UGestaltPartListData;
class UGlobalBoneModifyProfileState;
class UImpactData;
class UGbxAnimBlueprintProfile;
class UGbxCustomizationTargetData;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxSkeletalMeshComponent : public USkeletalMeshComponent, public IImpactDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<USkeletalMeshComponent> ParentAnimationComponent;
    
protected:
    UPROPERTY(EditAnywhere, Replicated)
    UGestaltPartListData* GestaltPartList;
    
    UPROPERTY(Transient)
    TArray<UGestaltPartData_Mesh*> GestaltMeshParts;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GestaltMeshParts)
    FReplicatedGestaltPartsData ReplicatedGestaltParts;
    
    UPROPERTY(Transient)
    int32 GestaultSeed;
    
public:
    UPROPERTY(EditAnywhere)
    bool bAllowDynamicallyAddedForwardDynamicsNodes;
    
    UPROPERTY()
    TArray<FBoneModInstance> BoneModInstances;
    
    UPROPERTY(Transient)
    TArray<FStretchBonesInstance> StretchBonesInstances;
    
    UPROPERTY()
    UGbxBoneModifyProfile* BoneModifyProfile;
    
    UPROPERTY(EditAnywhere)
    bool bReplicateBoneMods;
    
    UPROPERTY(EditAnywhere, Replicated)
    FBoneModifyProfileData BoneModifyProfileData;
    
    UPROPERTY(Transient)
    double LastUpdateTime;
    
    UPROPERTY(Transient)
    TArray<FBMPOverride> CachedGlobalBMP;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GlobalBoneMod)
    TArray<UGlobalBoneModifyProfileState*> GlobalBMPRepArray;
    
    UPROPERTY(EditAnywhere)
    float NoBodyMass;
    
    UPROPERTY(EditAnywhere)
    float ImpulseMultiplier;
    
    UPROPERTY(EditAnywhere)
    UImpactData* DefaultImpactData;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, UImpactData*> BodyImpactDataOverrides;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxCustomizationTargetData*> CustomizationTargets;
    
    UPROPERTY(Transient)
    FStretchAnimData StretchAnimData;
    
    UPROPERTY(EditAnywhere)
    UGbxAnimBlueprintProfile* AnimBPProfile;
    
    UPROPERTY(EditAnywhere)
    bool bGaitScalingOverride;
    
    UPROPERTY(EditAnywhere)
    FGaitScalingSettings GaitScalingSettings;
    
private:
    UPROPERTY(EditAnywhere)
    bool bUseAggregateSimulationSleepCheck;
    
    UPROPERTY(EditAnywhere)
    float AggregateSimulationSleepCheckSeconds;
    
    UPROPERTY(EditAnywhere)
    float AggregateSimulationSleepCheckDistance;
    
    UPROPERTY(EditAnywhere)
    FAnimUpdateRateParameters UpdateRateParametersOverride;
    
    UPROPERTY()
    bool bOverrideUpdateRateParameters;
    
    UPROPERTY(EditAnywhere)
    FGbxAnimPoseMatch PoseMatch;
    
public:
    UGbxSkeletalMeshComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void ShowGestaltMeshParts(const TArray<UGestaltPartData_Mesh*>& Parts, bool bLocalOnly);
    
    UFUNCTION(BlueprintCallable)
    void ShowGestaltMeshPart(const UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUpdateOverrideValues(const TArray<float>& UpdateRateOverrides, bool bEnableOverrideProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetParentAnimationComponent(USkeletalMeshComponent* ParentComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetGestaltPartList(UGestaltPartListData* NewGestaltPartList);
    
private:
    UFUNCTION()
    void RunPoseTest();
    
public:
    UFUNCTION()
    void OnRep_GlobalBoneMod();
    
private:
    UFUNCTION()
    void OnRep_GestaltMeshParts();
    
public:
    UFUNCTION(BlueprintCallable)
    void LinkSkelMeshAnimInstances(const TArray<USkeletalMeshComponent*>& InLinkedSkelMeshComponents);
    
    UFUNCTION(BlueprintCallable)
    void LinkSkelMeshAnimInstance(USkeletalMeshComponent* InLinkedSkelMeshComponent);
    
private:
    UFUNCTION(BlueprintPure)
    bool IsGestaltMeshPartVisible(const UGestaltPartData_Mesh* GestaltMeshPart) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCustomizationTargetFor(UGbxCustomizationTargetData* TargetToTest) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HideGestaltMeshParts(const TArray<UGestaltPartData_Mesh*>& Parts, bool bLocalOnly);
    
    UFUNCTION(BlueprintCallable)
    void HideGestaltMeshPart(const UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<float> GetUpdateOverrideValues() const;
    
private:
    UFUNCTION()
    void GetAvailableBoneNames(TArray<FName>& Array) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CopyGestaltPartList(AActor* GestaltPartListSource);
    
    
    // Fix for true pure virtual functions not being implemented
};

