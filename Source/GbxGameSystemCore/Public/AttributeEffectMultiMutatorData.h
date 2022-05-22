#pragma once
#include "CoreMinimal.h"
#include "AttributeEffectMutatorData.h"
#include "AttributeEffectMultiMutatorData.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UAttributeEffectMultiMutatorData : public UAttributeEffectMutatorData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UAttributeEffectMutatorData*> Mutators;
    
public:
    UAttributeEffectMultiMutatorData();
};

