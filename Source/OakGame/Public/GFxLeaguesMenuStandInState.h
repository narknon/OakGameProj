#pragma once
#include "CoreMinimal.h"
#include "DesiredStandInActorData.h"
#include "GFxLeaguesMenuStandInState.generated.h"

class UOakCustomizationData;
class UWeaponTrinketPartData;
class UWeaponSkinPartData;
class AActor;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxLeaguesMenuStandInState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FDesiredStandInActorData ActorData;
    
    UPROPERTY(Transient)
    UOakCustomizationData* Customization;
    
    UPROPERTY(Transient)
    UWeaponTrinketPartData* WeaponTrinket;
    
    UPROPERTY(Transient)
    UWeaponSkinPartData* WeaponSkin;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> ActorReward;
    
    UPROPERTY(Transient)
    FName StandInConfig;
    
    FGFxLeaguesMenuStandInState();
};

