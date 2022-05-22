#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityEventHubStatics.h"
#include "OakPlayerAbilityEventHubStatics_Beastmaster.generated.h"

class AOakCharacter;
class AOakCharacter_Player;

UCLASS(BlueprintType)
class UOakPlayerAbilityEventHubStatics_Beastmaster : public UOakPlayerAbilityEventHubStatics {
    GENERATED_BODY()
public:
    UOakPlayerAbilityEventHubStatics_Beastmaster();
    UFUNCTION(BlueprintCallable)
    static void FireBeastmasterPetSummonStarted(AOakCharacter_Player* Player);
    
    UFUNCTION(BlueprintCallable)
    static void FireBeastmasterPetSpawned(AOakCharacter_Player* Player, AOakCharacter* NewPet);
    
    UFUNCTION(BlueprintCallable)
    static void FireBeastmasterPetReleased(AOakCharacter_Player* Player, AOakCharacter* NewPet);
    
};

