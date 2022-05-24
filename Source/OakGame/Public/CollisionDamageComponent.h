#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "LastCollisionDamageInfo.h"
#include "AttributeInitializationData.h"
#include "ForceSelection.h"
#include "ActorComponentActorHitSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "CollisionDamageComponent.generated.h"

class UDamageSource;
class UGbxCondition;
class UGbxDamageType;
class AOakVehicle;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCollisionDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FLastCollisionDamageInfo LastCollisionDamageInfo;
    
protected:
    UPROPERTY(EditAnywhere)
    float MinVelocityToCauseDamage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData CollisionDamageFormula;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitForceVelocityFactor;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat DamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat AIDamageMultiplier;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* ConditionalDamageCondition;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat ConditionalDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData SelfCollisionDamageFormula;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat SelfDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat SelfAIDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DamageCurveRefSpeed;
    
    UPROPERTY(EditAnywhere)
    float HitCooldown;
    
    UPROPERTY(EditAnywhere)
    float FrontalCollisionAngle;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(EditAnywhere)
    FForceSelection ImpactForceSelection;
    
    UPROPERTY(BlueprintAssignable)
    FActorComponentActorHitSignature OnActorHit;
    
    UPROPERTY(Transient)
    AOakVehicle* MyOakVehicle;
    
public:
    UCollisionDamageComponent();
    UFUNCTION()
    void OnMeshComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

