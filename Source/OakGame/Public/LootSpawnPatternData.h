#pragma once
#include "CoreMinimal.h"
#include "PhysicsSpawnPatternData.h"
#include "LootSpawnPatternData.generated.h"

UCLASS()
class ULootSpawnPatternData : public UPhysicsSpawnPatternData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnableRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableRadiusRange: 1;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float MaxRadius;
    
    ULootSpawnPatternData();
};

