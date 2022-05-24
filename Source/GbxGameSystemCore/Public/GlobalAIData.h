#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "GameplayTagContainer.h"
#include "GbxDataAsset.h"
#include "GlobalAIData.generated.h"

class UHitReactionTag;
class UHitReactionLayer;

UCLASS()
class GBXGAMESYSTEMCORE_API UGlobalAIData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CombatTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag PassiveTag;
    
    UPROPERTY(EditAnywhere)
    float AITimeToRememberDirectAttacks;
    
    UPROPERTY(EditAnywhere)
    float AITimeToRememberNonAttackingEnemies;
    
    UPROPERTY(EditAnywhere)
    float AITimeToRememberHiddenEnemies;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* JumpHitReactionDeathOverride;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitReactionLayer> JumpHitLiveReactionLayer;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfPlayingFirstNoticerAggroAnimation;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfPlayingSecondNoticerAggroAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bUseVariableAccuracy;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TimeToBestAccuracy;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamagePctToWorstAccuracy;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamagePctDecayRate;
    
    UPROPERTY(EditAnywhere)
    float MinAccuracy;
    
    UGlobalAIData();
};

