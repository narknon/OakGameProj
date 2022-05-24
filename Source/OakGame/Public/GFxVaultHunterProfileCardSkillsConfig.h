#pragma once
#include "CoreMinimal.h"
#include "GFxVaultHunterProfileCardSkillsConfig.generated.h"

USTRUCT()
struct FGFxVaultHunterProfileCardSkillsConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float GreenProgress;
    
    UPROPERTY(Transient)
    float BlueProgress;
    
    UPROPERTY(Transient)
    float RedProgress;
    
    UPROPERTY(Transient)
    float PurpleProgress;
    
    UPROPERTY(Transient)
    FString ClassFrameName;
    
    OAKGAME_API FGFxVaultHunterProfileCardSkillsConfig();
};

