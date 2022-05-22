#pragma once
#include "CoreMinimal.h"
#include "GFxVaultHunterProfileCardPlayerConfig.generated.h"

class UTexture;
class UPlayerClassIdentifier;

USTRUCT()
struct FGFxVaultHunterProfileCardPlayerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTexture* ProfilePicture;
    
    UPROPERTY(Transient)
    FText PlayerName;
    
    UPROPERTY(Transient)
    FText MissionName;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UPlayerClassIdentifier> PlayerClass;
    
    UPROPERTY(Transient)
    bool bHasSelectedCharacter;
    
    OAKGAME_API FGFxVaultHunterProfileCardPlayerConfig();
};

