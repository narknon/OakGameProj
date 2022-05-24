#pragma once
#include "CoreMinimal.h"
#include "DialogEnumValueInterface.h"
#include "GbxDamageType.h"
#include "EOakElementalType.h"
#include "OakDamageType.generated.h"

class UGameStatData;
class UDialogEnumValue;

UCLASS()
class UOakDamageType : public UGbxDamageType, public IDialogEnumValueInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bAffectedByRadiationMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOakElementalType ElementalType;
    
    UPROPERTY(EditAnywhere)
    UDialogEnumValue* DialogSystemEnumValue;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* KillStat;
    
    UPROPERTY(EditAnywhere)
    bool bForceDamageToHealthType;
    
    UOakDamageType();
    
    // Fix for true pure virtual functions not being implemented
};

