#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "RigidBodyImpactSettings.h"
#include "SurfaceTypeInfo.h"
#include "DestructionForceSmoothing.h"
#include "GbxPhysicsSettings.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class GBXGAMESYSTEMCORE_API UGbxPhysicsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, FSurfaceTypeInfo> SurfaceTypeInfoMap;
    
    UPROPERTY(Config, EditAnywhere)
    FRigidBodyImpactSettings RigidBodyImpactSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FDestructionForceSmoothing ForceSmoothing;
    
    UPROPERTY(Config, EditAnywhere)
    float LowDamageThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float MediumDamageThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float HighDamageThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float RagdollWeaponForceFeatherPercent;
    
    UGbxPhysicsSettings();
    UFUNCTION(BlueprintCallable)
    static void StaticSetRigidBodySimulationInteractability(USkeletalMeshComponent* Comp, bool bAesthetic, FName BodyName);
    
};

