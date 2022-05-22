#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxFlagData.generated.h"

class UGbxFlagValueResolver;
class UGbxCondition;
class UAttributeContextResolver;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxFlagData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UAttributeContextResolver* ContextResolver;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGbxFlagValueResolver* ValueResolver;
    
public:
    UGbxFlagData();
};

