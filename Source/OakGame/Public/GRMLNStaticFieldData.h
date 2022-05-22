#pragma once
#include "CoreMinimal.h"
#include "GRMLNBeamData.h"
#include "GRMLNStaticFieldData.generated.h"

class UShieldProviderInterface;
class IShieldProviderInterface;

USTRUCT(BlueprintType)
struct FGRMLNStaticFieldData : public FGRMLNBeamData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<IShieldProviderInterface> ShieldProviderInterface;
    
public:
    OAKGAME_API FGRMLNStaticFieldData();
};

