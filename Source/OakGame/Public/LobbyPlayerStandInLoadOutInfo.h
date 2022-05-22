#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerStandInLoadOutInfo.generated.h"

class UOakCustomizationData;
class UWeaponSkinPartData;

USTRUCT(BlueprintType)
struct OAKGAME_API FLobbyPlayerStandInLoadOutInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakCustomizationData* HeadCustomization;
    
    UPROPERTY()
    UOakCustomizationData* BodyCustomization;
    
    UPROPERTY()
    UOakCustomizationData* SkinCustomization;
    
    UPROPERTY()
    UOakCustomizationData* EquippedEmote;
    
    UPROPERTY()
    UWeaponSkinPartData* Weapon1Skin;
    
    FLobbyPlayerStandInLoadOutInfo();
};

