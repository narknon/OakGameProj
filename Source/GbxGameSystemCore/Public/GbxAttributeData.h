#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxAttributeData.generated.h"

class UAttributeContextResolver;
class UAttributeValueResolver;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxAttributeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UAttributeContextResolver* ContextResolver;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UAttributeValueResolver* ValueResolver;
    
    UGbxAttributeData();
    UFUNCTION(BlueprintPure)
    bool CanSetBaseValue() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBindToOnChangedEvent() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAddModifiers() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAddAndRemoveModifiers() const;
    
};

