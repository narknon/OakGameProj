#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentData.h"
#include "EOakActionAbilityPetType.h"
#include "EOakActionAbilityPetModType.h"
#include "OakActionAbilityAugmentData_Pet_Mod.generated.h"

UCLASS()
class UOakActionAbilityAugmentData_Pet_Mod : public UOakActionAbilityAugmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EOakActionAbilityPetType ModPetType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EOakActionAbilityPetModType ModType;
    
public:
    UOakActionAbilityAugmentData_Pet_Mod();
};

