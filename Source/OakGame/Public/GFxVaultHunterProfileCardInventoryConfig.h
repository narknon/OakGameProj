#pragma once
#include "CoreMinimal.h"
#include "GFxVaultHunterProfileCardInventoryConfig.generated.h"

USTRUCT()
struct FGFxVaultHunterProfileCardInventoryConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString WeaponRarityFrames[4];
    
    UPROPERTY(Transient)
    FString WeaponTypeFrames[4];
    
    UPROPERTY(Transient)
    FString GrenadeRarityFrame;
    
    UPROPERTY(Transient)
    FString ShieldRarityFrame;
    
    UPROPERTY(Transient)
    FString ClassModRarityFrame;
    
    UPROPERTY(Transient)
    FString RelicRarityFrame;
    
    UPROPERTY(Transient)
    bool bIsRelic2;
    
    OAKGAME_API FGFxVaultHunterProfileCardInventoryConfig();
};

