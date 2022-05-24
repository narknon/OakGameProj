#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "UObject/NoExportTypes.h"
#include "CarnivoraDamageZoneInfo.h"
#include "AttributeInitializationData.h"
#include "Engine/EngineTypes.h"
#include "CarnivoraDamageZoneComponent.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCarnivoraDamageZoneComponent : public UBoxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    USceneComponent* OrgAttachParent;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageFormula;
    
    UPROPERTY(EditAnywhere)
    float VehicleImpulseFactor;
    
    UPROPERTY(EditAnywhere)
    float CharacterImpulseFactor;
    
    UPROPERTY(EditAnywhere)
    float DamageCooldownTime;
    
    UPROPERTY(EditAnywhere)
    FCarnivoraDamageZoneInfo PlayerDamageInfo;
    
    UPROPERTY(EditAnywhere)
    FCarnivoraDamageZoneInfo OtherDamageInfo;
    
public:
    UCarnivoraDamageZoneComponent();
    UFUNCTION()
    void OnActorComponentHit(UPrimitiveComponent* HitComp, AActor* Other, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& SweepResult);
    
};

