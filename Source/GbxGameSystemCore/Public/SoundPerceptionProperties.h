#pragma once
#include "CoreMinimal.h"
#include "SoundPerceptionProperties.generated.h"

USTRUCT(BlueprintType)
struct FSoundPerceptionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float Loudness;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    GBXGAMESYSTEMCORE_API FSoundPerceptionProperties();
};

