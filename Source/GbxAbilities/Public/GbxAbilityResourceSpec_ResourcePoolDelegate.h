#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceSpec.h"
#include "EAbilityResourceDelegateType.h"
#include "GbxAbilityResourceSpec_ResourcePoolDelegate.generated.h"

class UGameResourcePoolManagerComponent;
class UGameResourcePoolData;
class UDelegateProperty;

USTRUCT(BlueprintType)
struct FGbxAbilityResourceSpec_ResourcePoolDelegate : public FGbxAbilityResourceSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UGameResourcePoolManagerComponent* ResourcePoolComponent;
    
    UPROPERTY(BlueprintReadWrite)
    UGameResourcePoolData* ResourcePoolData;
    
    UPROPERTY(BlueprintReadWrite)
    EAbilityResourceDelegateType DelegateType;
    
    UPROPERTY(BlueprintReadWrite)
    UDelegateProperty* DelegateEventProperty;
    
    GBXABILITIES_API FGbxAbilityResourceSpec_ResourcePoolDelegate();
};

