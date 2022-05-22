#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "GbxPerceptionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StimulusStrengthOverrideTime;
    
    UGbxPerceptionComponent();
};

