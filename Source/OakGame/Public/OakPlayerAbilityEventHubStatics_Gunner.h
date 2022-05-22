#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityEventHubStatics.h"
#include "OakPlayerAbilityEventHubStatics_Gunner.generated.h"

class AOakCharacter_Player;
class AOakCharacter_IronBear;

UCLASS(BlueprintType)
class UOakPlayerAbilityEventHubStatics_Gunner : public UOakPlayerAbilityEventHubStatics {
    GENERATED_BODY()
public:
    UOakPlayerAbilityEventHubStatics_Gunner();
    UFUNCTION(BlueprintCallable)
    static void FireIronBearExitedAndPlayerReady(AOakCharacter_Player* Player, AOakCharacter_IronBear* IronBear);
    
    UFUNCTION(BlueprintCallable)
    static void FireIronBearEnteredAndPlayerReady(AOakCharacter_Player* Player, AOakCharacter_IronBear* IronBear);
    
};

