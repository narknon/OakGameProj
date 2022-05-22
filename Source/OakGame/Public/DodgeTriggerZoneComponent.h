#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DodgeTriggerZoneComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDodgeTriggerZoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MinVelocityToDodge;
    
    UPROPERTY(EditAnywhere)
    float MaxVelocityToScale;
    
    UPROPERTY(EditAnywhere)
    float DodgeLength;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float MaxScale;
    
    UPROPERTY(EditAnywhere)
    float StartOffsetX;
    
    UPROPERTY(EditAnywhere)
    float OffsetZ;
    
    UPROPERTY()
    TArray<AActor*> PreviousInZoneActors;
    
public:
    UDodgeTriggerZoneComponent();
};

