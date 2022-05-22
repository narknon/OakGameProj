#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "OrbitOscillationInfo.h"
#include "OrbitingActorComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UOrbitingActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_TargetActor)
    AActor* TargetActor;
    
    UPROPERTY(EditAnywhere)
    FVector BaseOrbitOffset;
    
    UPROPERTY(EditAnywhere)
    float ApproachSpeed;
    
    UPROPERTY(EditAnywhere)
    float SmoothingDistance;
    
    UPROPERTY(EditAnywhere)
    float SmoothingDuration;
    
    UPROPERTY(EditAnywhere)
    FOrbitOscillationInfo XAxisOscillation;
    
    UPROPERTY(EditAnywhere)
    FOrbitOscillationInfo YAxisOscillation;
    
    UPROPERTY(EditAnywhere)
    FOrbitOscillationInfo ZAxisOscillation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsInOrbit;
    
private:
    UPROPERTY(Transient)
    float SmoothingAlpha;
    
public:
    UOrbitingActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AActor* NewTarget);
    
protected:
    UFUNCTION()
    void OnRep_TargetActor(AActor* LastTarget);
    
};

