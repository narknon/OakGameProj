#pragma once
#include "CoreMinimal.h"
#include "MissionIconComponent.h"
#include "OakMissionIconComponent.generated.h"

class UInWorldIconData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakMissionIconComponent : public UMissionIconComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UInWorldIconData* IconData;
    
    UPROPERTY(EditAnywhere)
    float VisibleDistanceOverride;
    
    UPROPERTY(EditAnywhere)
    float HiddenDistanceOverride;
    
    UPROPERTY(EditAnywhere)
    bool bDrawIconVisibilityDistance;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotOverrideCondition;
    
    UOakMissionIconComponent();
};

