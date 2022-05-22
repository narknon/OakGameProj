#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_DeathOverride.generated.h"

class UHitReactionTag;

UCLASS(CollapseCategories, DefaultConfig, EditInlineNew, Config=Game)
class GBXGAMESYSTEMCORE_API UAnimNotifyState_DeathOverride : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UHitReactionTag* DeathReactionTag;
    
    UPROPERTY(Config)
    FSoftObjectPath DefaultReactionTagName;
    
public:
    UAnimNotifyState_DeathOverride();
};

