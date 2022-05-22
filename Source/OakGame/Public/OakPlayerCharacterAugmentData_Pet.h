#pragma once
#include "CoreMinimal.h"
#include "PlayerCharacterComponentAugmentData.h"
#include "EOakActionAbilityPetEvolutionType.h"
#include "EOakActionAbilityPetType.h"
#include "OakPlayerCharacterAugmentData_Pet.generated.h"

UCLASS()
class OAKGAME_API UOakPlayerCharacterAugmentData_Pet : public UPlayerCharacterComponentAugmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EOakActionAbilityPetType PetType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EOakActionAbilityPetEvolutionType EvolutionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString HUDIconFrameName;
    
public:
    UOakPlayerCharacterAugmentData_Pet();
};

