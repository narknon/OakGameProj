#pragma once
#include "CoreMinimal.h"
#include "FilteredImpactData.generated.h"

class UImpactData;
class UFeedbackData;
class UPhysicalMaterial;
class AActor;

USTRUCT(BlueprintType)
struct FFilteredImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UImpactData*> ImpactData;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* DefaultVehicleOccupantsFeedback;
    
    UPROPERTY(EditAnywhere)
    TMap<UPhysicalMaterial*, UFeedbackData*> VehicleOccupantsFeedback;
    
    UPROPERTY(EditAnywhere)
    float FeedbackScale;
    
    UPROPERTY(EditAnywhere)
    bool bLocalOnlyFeedback;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AActor>> ClassesToTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AActor>> ClassesToExclude;
    
    OAKGAME_API FFilteredImpactData();
};

