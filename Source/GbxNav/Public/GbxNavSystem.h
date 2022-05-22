#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "GbxNavSystem.generated.h"

class AGbxNavWorld;

UCLASS()
class GBXNAV_API UGbxNavSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
public:
    UGbxNavSystem();
};

