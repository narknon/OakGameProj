#pragma once
#include "CoreMinimal.h"
#include "GbxReachabilityTracker.generated.h"

class AGbxNavWorld;
class USceneComponent;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxReachabilityTracker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Export, Transient)
    USceneComponent* CachedSourceRoot;
    
    UPROPERTY(Export, Transient)
    USceneComponent* CachedGoalRoot;
    
public:
    FGbxReachabilityTracker();
};

