#pragma once
#include "CoreMinimal.h"
#include "StatusEffectData.h"
#include "EPresentableStatusEffectValueStrategy.h"
#include "OakPresentableStatusEffectData.generated.h"

class UOakStatusEffectPresentationData;

UCLASS()
class OAKGAME_API UOakPresentableStatusEffectData : public UStatusEffectData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UOakStatusEffectPresentationData* FXData;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UOakStatusEffectPresentationData* PresentationData;
    
    UPROPERTY(EditDefaultsOnly)
    EPresentableStatusEffectValueStrategy ValueStrategy;
    
public:
    UOakPresentableStatusEffectData();
};

