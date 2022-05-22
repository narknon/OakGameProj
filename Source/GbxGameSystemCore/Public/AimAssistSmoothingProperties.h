#pragma once
#include "CoreMinimal.h"
#include "AimAssistSmoothingProperties.generated.h"

class AActor;
class UTeam;

USTRUCT(BlueprintType)
struct FAimAssistSmoothingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* LastTarget;
    
    UPROPERTY(Transient)
    UTeam* LastTargetTeam;
    
    GBXGAMESYSTEMCORE_API FAimAssistSmoothingProperties();
};

