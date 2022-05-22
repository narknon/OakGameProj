#pragma once
#include "CoreMinimal.h"
#include "OakActionAbility.h"
#include "EOakActionAbilityPetType.h"
#include "OakActionAbilityEnumMaskHelper.h"
#include "EOakActionAbilityPetModType.h"
#include "OakActionAbility_Beastmaster.generated.h"

class AOakCharacter;
class UBeastmasterCharacterComponent;

UCLASS()
class UOakActionAbility_Beastmaster : public UOakActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EOakActionAbilityPetType AbilityPetType;
    
    UPROPERTY(Replicated, Transient)
    FOakActionAbilityEnumMaskHelper RuntimeMods;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UBeastmasterCharacterComponent* BeastmasterComponent;
    
public:
    UOakActionAbility_Beastmaster();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool HasRuntimeMod(EOakActionAbilityPetModType ModType) const;
    
protected:
    UFUNCTION(BlueprintPure)
    AOakCharacter* GetCurrentPet() const;
    
};

