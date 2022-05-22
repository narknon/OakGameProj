#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "AttributeEffect.h"
#include "GameplayTagContainer.h"
#include "StatusEffectData.generated.h"

class UStatusEffectStackingStrategyData;
class UDamageSource;
class UGbxDamageType;

UCLASS()
class GBXGAMESYSTEMCORE_API UStatusEffectData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UStatusEffectStackingStrategyData* StackingStrategy;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeEffect> AttributeEffects;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDoesDamageOverTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageSource> DamageSourceClass;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer GameplayTags;
    
public:
    UStatusEffectData();
};

