#pragma once
#include "CoreMinimal.h"
#include "OakAbility.h"
#include "OakPlayerAbility.generated.h"

class UUIStatData;
class AOakCharacter_Player;
class UOakPlayerAbilityManagerComponent;
class UOakPlayerAbilitySlotData;

UCLASS()
class OAKGAME_API UOakPlayerAbility : public UOakAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bMustBeSlotted;
    
private:
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UUIStatData*> StatDataItems;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OakCharacterPlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UOakPlayerAbilityManagerComponent* OakManager;
    
public:
    UOakPlayerAbility();
    UFUNCTION(BlueprintPure)
    bool IsSlotted() const;
    
    UFUNCTION(BlueprintPure)
    UOakPlayerAbilitySlotData* GetCurrentSlot() const;
    
};

