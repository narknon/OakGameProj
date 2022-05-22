#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ViewLeadingTranslationInfo.h"
#include "ViewLeadingRotationInfo.h"
#include "UObject/NoExportTypes.h"
#include "FirstPersonCreatedEventDelegate.h"
#include "TrackedFirstPersonComponent.h"
#include "FirstPersonComponent.generated.h"

class AFirstPersonConfigurationData;
class UGbxSkeletalMeshComponent;
class UAnimSequence;
class UBlendSpaceBase;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UFirstPersonComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AFirstPersonConfigurationData> ConfigData;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, VisibleAnywhere)
    UGbxSkeletalMeshComponent* Arms;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UGbxSkeletalMeshComponent* Legs;
    
    UPROPERTY(EditAnywhere)
    FName FirstPersonRootBone;
    
    UPROPERTY(EditAnywhere)
    FName CameraSocket;
    
    UPROPERTY(EditAnywhere)
    FName PrimaryHandWeaponSocket;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* BaseTransformsAnimation;
    
    UPROPERTY(EditAnywhere)
    float CrouchTransitionDuration;
    
    UPROPERTY(EditAnywhere)
    float CrouchTransitionEasing;
    
    UPROPERTY(EditAnywhere)
    TArray<FViewLeadingTranslationInfo> TranslationLeadingList;
    
    UPROPERTY()
    FViewLeadingTranslationInfo TranslationLeading;
    
    UPROPERTY(EditAnywhere)
    TArray<FViewLeadingRotationInfo> RotationleadingList;
    
    UPROPERTY()
    FViewLeadingRotationInfo RotationLeading;
    
    UPROPERTY(EditAnywhere)
    FViewLeadingRotationInfo ZoomRotationLeading;
    
    UPROPERTY(EditAnywhere)
    FName ZoomRotationSocket;
    
    UPROPERTY(EditAnywhere)
    float ShotOffsetSpeed;
    
    UPROPERTY(EditAnywhere)
    float ShotOffsetRecoverySpeed;
    
    UPROPERTY(EditAnywhere)
    FVector MaxViewModelImpulseTranslationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator MaxViewModelImpulseRotationOffset;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* FlinchBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FName FlinchAnimSlotName;
    
    UPROPERTY(EditAnywhere)
    float DefaultFlinchBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float DefaultFlinchBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float InterruptFlinchBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float FlinchInterruptThreshold;
    
    UPROPERTY(EditAnywhere)
    float ZoomedFlinchWeight;
    
    UPROPERTY(BlueprintAssignable)
    FFirstPersonCreatedEvent OnFirstPersonCreated;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FTransform> ViewModelOffsetList;
    
    UPROPERTY(Transient)
    FRotator CurrentShotRotationOffset;
    
protected:
    UPROPERTY(Transient)
    FVector BaseViewModelLocationOffset;
    
    UPROPERTY(Export, Transient)
    TArray<USceneComponent*> CreatedFirstPersonComponents;
    
    UPROPERTY(Transient)
    TArray<FTrackedFirstPersonComponent> TopLevelComponents;
    
    UPROPERTY(Transient)
    FRotator TargetShotRotationOffset;
    
    UPROPERTY(Transient)
    FVector CurrentRelativeLocation;
    
    UPROPERTY(Transient)
    FVector DefaultTranslationOffset;
    
public:
    UFirstPersonComponent();
private:
    UFUNCTION(BlueprintCallable)
    void SetBaseEyeToWeaponTransform(FTransform NewWeaponTransform);
    
public:
    UFUNCTION(BlueprintPure)
    USceneComponent* GetFirstPersonComponentByName(FName Name) const;
    
};

