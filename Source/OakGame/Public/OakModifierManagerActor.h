#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "OakModifierManagerActor.generated.h"

UCLASS(NotPlaceable, Transient, Config=Game)
class OAKGAME_API AOakModifierManagerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FGbxAttributeFloat EnemyHealthScalar;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat EnemyShieldScalar;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat EnemyArmorScalar;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat MayhemLootMultiplier;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat MayhemEridiumMultiplier;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat MayhemSkillScalar;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat MayhemEnvironmentScalar;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat GlobalRarityWeightLevelBias;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat GlobalCommonRarityWeightModifier;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat GlobalUncommonRarityWeightModifier;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat GlobalRareRarityWeightModifier;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat GlobalVeryRareRarityWeightModifier;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat GlobalLegendaryRarityWeightModifier;
    
public:
    AOakModifierManagerActor();
};

