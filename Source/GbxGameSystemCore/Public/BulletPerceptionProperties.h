#pragma once
#include "CoreMinimal.h"
#include "BulletPerceptionProperties.generated.h"

USTRUCT(BlueprintType)
struct FBulletPerceptionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float Strength;
    
    GBXGAMESYSTEMCORE_API FBulletPerceptionProperties();
};

