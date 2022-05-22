#pragma once
#include "CoreMinimal.h"
#include "AISystem.h"
#include "GbxAISystemBase.generated.h"

class UGbxQueryManager;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAISystemBase : public UAISystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxQueryManager* GbxQueryManager;
    
public:
    UGbxAISystemBase();
};

