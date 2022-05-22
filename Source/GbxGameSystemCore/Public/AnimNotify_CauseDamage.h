#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_CauseDamage.generated.h"

class UDamageData;

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_CauseDamage : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> DamageData;
    
public:
    UAnimNotify_CauseDamage();
};

