#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EOakStatusEffectResourceEffectType.h"
#include "OakResourceEffectData.generated.h"

class UGbxAttributeData;
class UGameResourcePoolData;
class UGbxDamageType;
class UOakStatusEffectPresentationData;

USTRUCT(BlueprintType)
struct FOakResourceEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOakStatusEffectResourceEffectType ResourceEffectType;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    UGameResourcePoolData* ResourcePool;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    UGbxAttributeData* PostDepleteImmuneTime;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    TSubclassOf<UGbxDamageType> DamageTypeClass;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    UGbxAttributeData* DamageModifier;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    UGbxAttributeData* DamagedActorModifier;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    float DefaultPercentBaseDamage;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    UOakStatusEffectPresentationData* FXData;
    
    OAKGAME_API FOakResourceEffectData();
};

