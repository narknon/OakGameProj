#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityEventHubStatics.h"
#include "OakPlayerAbilityEventHubStatics_Operative.generated.h"

class AOakCharacter;
class AOakCharacter_Player;

UCLASS(BlueprintType)
class UOakPlayerAbilityEventHubStatics_Operative : public UOakPlayerAbilityEventHubStatics {
    GENERATED_BODY()
public:
    UOakPlayerAbilityEventHubStatics_Operative();
    UFUNCTION(BlueprintCallable)
    static void FireOperativeGotKill(AOakCharacter_Player* Player);
    
    UFUNCTION(BlueprintCallable)
    static void FireOperativeDigicloneDestroyed(AOakCharacter_Player* Player, AOakCharacter* Digiclone);
    
    UFUNCTION(BlueprintCallable)
    static void FireOperativeCalledShotActivated(AOakCharacter_Player* Player);
    
    UFUNCTION(BlueprintCallable)
    static void FireNewOperativeDigicloneSpawned(AOakCharacter_Player* Player, AOakCharacter* Digiclone);
    
};

