#pragma once
#include "CoreMinimal.h"
#include "NameplateBarData.generated.h"

class UGbxGFxProgressBar;
class UGbxGFxObject;
class UNameplateInfoProviderInterface;
class INameplateInfoProviderInterface;

USTRUCT(BlueprintType)
struct FNameplateBarData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxProgressBar* NameplateBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NameplateBarContainer;
    
    UPROPERTY(Transient)
    TScriptInterface<INameplateInfoProviderInterface> TargetActorOverride;
    
    OAKGAME_API FNameplateBarData();
};

