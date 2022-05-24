#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "LowGravHoveringComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API ULowGravHoveringComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TotalHoveringTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisplacementHeightOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TotalOscillation;
    
    ULowGravHoveringComponent();
    UFUNCTION()
    void OnHit(AActor* OwnerActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

