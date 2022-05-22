#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "OakVehicleAspectData.h"
#include "ERevolverOffsetMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VehicleAttachMeshAspectData.generated.h"

class UAnimInstance;

UCLASS(EditInlineNew)
class UVehicleAttachMeshAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath Mesh;
    
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ComponentTags;
    
    UPROPERTY(EditAnywhere)
    FName AttachSocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocalOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator LocalRotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    bool bUseAttachParentBound;
    
    UPROPERTY(EditAnywhere)
    ERevolverOffsetMode RevolverOffsetMode;
    
    UPROPERTY(EditAnywhere)
    FName CollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    bool bWeldSimulatedBodies;
    
    UPROPERTY(EditAnywhere)
    bool bWeldedBodiesShouldModifyPhysicalProperties;
    
    UPROPERTY(EditAnywhere)
    bool bUseParentPoseComponent;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UAnimInstance> AnimClass;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAnimationMode::Type> AnimMode;
    
    UVehicleAttachMeshAspectData();
};

