#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponEffectType.h"
#include "OakWeaponVehicleData.generated.h"

class UInventoryAspectData;
class UPhysicsAsset;
class USkeletalMesh;
class UAnimInstance;
class UAnimSequenceBase;
class USwfMovie;

UCLASS()
class UOakWeaponVehicleData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly, Export)
    TArray<UInventoryAspectData*> AspectList;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    bool bNeverDistanceCull;
    
    UPROPERTY(EditAnywhere)
    bool bMeshUseAttachParentBound;
    
    UPROPERTY(EditAnywhere)
    bool bUseDualWeaponMesh;
    
    UPROPERTY(EditAnywhere)
    bool bChildMeshUseAttachParentBound;
    
    UPROPERTY(EditAnywhere)
    FName LeftParentSocket;
    
    UPROPERTY(EditAnywhere)
    FString LeftMeshComponentName;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* LeftSkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    FVector LeftScale;
    
    UPROPERTY(EditAnywhere)
    FVector LeftOffset;
    
    UPROPERTY(EditAnywhere)
    FName RightParentSocket;
    
    UPROPERTY(EditAnywhere)
    FString RightMeshComponentName;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* RightSkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    FVector RightScale;
    
    UPROPERTY(EditAnywhere)
    FVector RightOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUsePhysicAsset;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* PhysicAsset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* ShotAnimation;
    
    UPROPERTY(EditAnywhere)
    float ShotAnimationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float ShotAnimationBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float ShotAnimationPlayRate;
    
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> DualWeaponAnimClass;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* DualWeaponShotAnimation;
    
    UPROPERTY(EditAnywhere)
    float DualWeaponShotAnimationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float DualWeaponShotAnimationBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float DualWeaponShotAnimationPlayRate;
    
    UPROPERTY(EditAnywhere)
    FName DualWeaponSlotName;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* VehicleWeaponsSwf;
    
    UPROPERTY(EditAnywhere)
    FString WeaponFrameName;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSecondaryAction;
    
    UPROPERTY(EditAnywhere)
    uint8 SecondaryActionUseMode;
    
    UPROPERTY(EditAnywhere)
    bool bUseIdleVFX;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWeaponEffectType> IdleVFXType;
    
    UPROPERTY(EditAnywhere)
    bool bUseLinkedSlotDualWield;
    
    UPROPERTY(EditAnywhere)
    FName LinkedSlotSocketName;
    
    UOakWeaponVehicleData();
};

