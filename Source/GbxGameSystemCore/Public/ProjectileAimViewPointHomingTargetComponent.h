#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileAimViewPointHomingTargetComponent.generated.h"

class AActor;
class UProjectileHomingComponent;
class AController;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UProjectileAimViewPointHomingTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAheadDistance;
    
private:
    UPROPERTY(Export)
    UProjectileHomingComponent* HomingComponent;
    
    UPROPERTY()
    AController* TargetController;
    
public:
    UProjectileAimViewPointHomingTargetComponent();
    UFUNCTION(BlueprintCallable)
    void SetTargetController(AController* InTargetController);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AActor* InTargetActor);
    
    UFUNCTION(BlueprintPure)
    AController* GetTargetController() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentHomingLoc() const;
    
};

