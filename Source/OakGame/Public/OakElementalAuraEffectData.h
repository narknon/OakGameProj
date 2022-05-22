#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "OakElementalAuraEffectData.generated.h"

class UOakElementalEffectData;
class UDamageData;
class UGbxAttributeData;

USTRUCT(BlueprintType)
struct FOakElementalAuraEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UOakElementalEffectData* ElementalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageData> DamageData;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData DamageRadius;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* DamagedActorModifier;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* DamageCauserModifier;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageRate;
    
    OAKGAME_API FOakElementalAuraEffectData();
};

