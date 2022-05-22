#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityEventHubStatics.h"
#include "OakPlayerAbilityEventHubStatics_Siren.generated.h"

class AOakCharacter_Player;
class AActor;
class AGbxCharacter;

UCLASS(BlueprintType)
class UOakPlayerAbilityEventHubStatics_Siren : public UOakPlayerAbilityEventHubStatics {
    GENERATED_BODY()
public:
    UOakPlayerAbilityEventHubStatics_Siren();
    UFUNCTION(BlueprintCallable)
    static void FirePhaseTranceGraspMissed(AOakCharacter_Player* Player);
    
    UFUNCTION(BlueprintCallable)
    static void FirePhaseTranceGraspedTarget(AOakCharacter_Player* Player, AGbxCharacter* GraspTarget);
    
    UFUNCTION(BlueprintCallable)
    static void FirePhaseTranceActivated(AOakCharacter_Player* Player);
    
    UFUNCTION(BlueprintCallable)
    static void FirePhaseGraspTargetKilled(AOakCharacter_Player* Player, AActor* Killer, AGbxCharacter* GraspTarget);
    
};

