#pragma once
#include "CoreMinimal.h"
#include "GbxAISystemBase.h"
#include "GbxAISystem.generated.h"

class UAIActionManager;
class UAIGroupState;

UCLASS()
class GBXAI_API UGbxAISystem : public UGbxAISystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAIActionManager* AIActionManager;
    
    UPROPERTY(Transient)
    UAIGroupState* PlayerAIGroupState;
    
public:
    UGbxAISystem();
};

