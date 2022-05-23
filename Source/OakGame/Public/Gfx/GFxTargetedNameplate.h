#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxTargetedNameplate.generated.h"

class UCurveFloat;
class UGFxNameplate;

UCLASS()
class OAKGAME_API UGFxTargetedNameplate : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxNameplate* Nameplate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* RangeFadeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FadeStartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FadeEndDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LingerDuration;
    
public:
    UGFxTargetedNameplate();
};

