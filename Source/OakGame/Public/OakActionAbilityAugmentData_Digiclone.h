#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentData.h"
#include "EDigiCloneModType.h"
#include "OakActionAbilityAugmentData_Digiclone.generated.h"

UCLASS()
class UOakActionAbilityAugmentData_Digiclone : public UOakActionAbilityAugmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EDigiCloneModType ModType;
    
public:
    UOakActionAbilityAugmentData_Digiclone();
};

