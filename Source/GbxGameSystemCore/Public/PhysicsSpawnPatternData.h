#pragma once
#include "CoreMinimal.h"
#include "SpawnPatternData.h"
#include "RelativeDirectionData.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsSpawnPatternData.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UPhysicsSpawnPatternData : public USpawnPatternData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnableSpeedRange: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableAngularSpeedRange: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplySpeedAsImpulse: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyAngularSpeedAsImpulse: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPickRandomPointInActorBounds: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleSpeedByIncomingImpulse: 1;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FRelativeDirectionData Direction;
    
    UPROPERTY(EditAnywhere)
    float AngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxAngularSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FRelativeDirectionData RotationAxis;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ActorBoundsScale;
    
    UPhysicsSpawnPatternData();
};

