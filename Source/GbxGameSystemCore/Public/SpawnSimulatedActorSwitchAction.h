#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SceneBodySwitchAction.h"
#include "RelativeDirectionData.h"
#include "UObject/NoExportTypes.h"
#include "SpawnSimulatedActorSwitchAction.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API USpawnSimulatedActorSwitchAction : public USceneBodySwitchAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableSpeedRange: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableAngularSpeedRange: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> DefaultAxis;
    
    UPROPERTY(EditAnywhere)
    FRelativeDirectionData Direction;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FRelativeDirectionData RotationAxis;
    
    UPROPERTY(EditAnywhere)
    float AngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float LifeSpan;
    
public:
    USpawnSimulatedActorSwitchAction();
};

