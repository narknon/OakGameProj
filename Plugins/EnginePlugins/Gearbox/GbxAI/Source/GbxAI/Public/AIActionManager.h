#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIActionManager.generated.h"

UCLASS(DefaultConfig, Config=Game)
class GBXAI_API UAIActionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float MaxTickTimeMs;
    
    UAIActionManager();
};

