#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConditionalDamageModifier.h"
#include "ConditionalDamageDamageTypeConditional.h"
#include "AttributeInitializationData.h"
#include "EConditionalDamageTypeBonusMode.h"
#include "ConditionalDamageTypeModifier.generated.h"

class UGbxDamageType;
class UDamageSource;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UConditionalDamageTypeModifier : public UConditionalDamageModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> OverrideDamageType;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionalDamageDamageTypeConditional> ConditionalDamageTypes;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageSource> OptionalOverrideDamageSource;
    
    UPROPERTY(EditAnywhere)
    EConditionalDamageTypeBonusMode BonusMode;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ExtraDamagePercent;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OverridePrimaryDamageTypeScale;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UConditionalDamageTypeModifier();
};

