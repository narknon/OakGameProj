#pragma once
#include "CoreMinimal.h"
#include "GbxReachabilityState.generated.h"

class AGbxNavWorld;
class UGbxNavComponent;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxReachabilityState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Export)
    UGbxNavComponent* NavComp;
    
public:
    FGbxReachabilityState();
};

