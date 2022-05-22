#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "EElementalInteractionSourceMode.h"
#include "AttributeInitializationData.h"
#include "ElementalInteractionTransitionData.h"
#include "ElementalInteractionData.generated.h"

class UGbxDamageType;
class UGbxNavArea;
class UNavArea;

UCLASS(BlueprintType)
class OAKGAME_API UElementalInteractionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EElementalInteractionSourceMode SourceMode;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> InitiatingDamageType;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageAmount;
    
    UPROPERTY(EditAnywhere)
    float InitialDamageDelay;
    
    UPROPERTY(EditAnywhere)
    float DamageInterval;
    
    UPROPERTY(EditAnywhere)
    float DamageTriggeredInteractionChance;
    
    UPROPERTY(EditAnywhere)
    float DamageTriggeredDuration;
    
    UPROPERTY(EditAnywhere)
    TArray<FElementalInteractionTransitionData> Transitions;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseStatusEffectChance;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseStatusEffectDamage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseStatusEffectDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxNavArea* GbxNavArea;
    
    UPROPERTY(EditAnywhere)
    bool bMimicBasedOnDamageType;
    
private:
    UPROPERTY()
    TSubclassOf<UNavArea> NavArea;
    
public:
    UElementalInteractionData();
};

