#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior.h"
#include "AttributeInitializationData.h"
#include "PayloadInstanceData.h"
#include "GrenadeBehavior_Payload.generated.h"

UCLASS(Abstract, BlueprintType)
class OAKGAME_API UGrenadeBehavior_Payload : public UGrenadeBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeInitializationData> StackValues;
    
public:
    UGrenadeBehavior_Payload();
protected:
    UFUNCTION(BlueprintPure)
    float GetValueFromInstanceData(const FPayloadInstanceData& InstanceData) const;
    
};

