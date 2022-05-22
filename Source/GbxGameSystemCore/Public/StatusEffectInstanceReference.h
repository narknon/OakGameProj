#pragma once
#include "CoreMinimal.h"
#include "StatusEffectInstanceReference.generated.h"

class UStatusEffectManagerComponent;
class UStatusEffectData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FStatusEffectInstanceReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UStatusEffectManagerComponent* StatusEffectManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 StatusEffectInstanceID;
    
public:
    FStatusEffectInstanceReference();
};

