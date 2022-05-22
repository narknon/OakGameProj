#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BranchColorInfo.h"
#include "AttributeInitializationData.h"
#include "PassiveAbilityBuffData.generated.h"

class UOakPassiveAbility;

USTRUCT(BlueprintType)
struct FPassiveAbilityBuffData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSoftObjectPath PassiveAbilityClassPath;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UOakPassiveAbility> PassiveAbilityClassPtr;
    
    UPROPERTY(VisibleAnywhere)
    FBranchColorInfo TreeBranchColorInfo;
    
    UPROPERTY(VisibleAnywhere)
    FString ItemFrameName;
    
    UPROPERTY(VisibleAnywhere)
    FString AbilityNameLocNamespace;
    
    UPROPERTY(VisibleAnywhere)
    FString AbilityNameLocKey;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData GradeBonusInitializer;
    
    OAKGAME_API FPassiveAbilityBuffData();
};

