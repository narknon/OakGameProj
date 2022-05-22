#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GameStageGradeWeightData.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FGameStageGradeWeightData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MinGameStage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxGameStage;
    
public:
    FGameStageGradeWeightData();
};

