#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAdditiveData.generated.h"

USTRUCT(BlueprintType)
struct FOakVehicleAdditiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VelocityMinTresholdForward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VelocityMaxTresholdForward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VelocityMinTresholdBackward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VelocityMaxTresholdBackward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VelocityMinTresholdLateral;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VelocityMaxTresholdLateral;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float FrontBackMinInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float FrontBackMaxInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float LeftRightMinInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float LeftRightMaxInterpSpeed;
    
    OAKGAME_API FOakVehicleAdditiveData();
};

