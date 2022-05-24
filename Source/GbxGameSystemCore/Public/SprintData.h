#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttributeEffectData.h"
#include "SprintData.generated.h"

class UCurveFloat;
class UFeedbackData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API USprintData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* SprintFOVCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddModifierToBaseFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintFOVModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintFOVBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintFOVBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintFOVBlendInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFeedbackData* Feedback;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FAttributeEffectData> SprintAttributeEffects;
    
    USprintData();
};

