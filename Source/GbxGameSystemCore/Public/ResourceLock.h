#pragma once
#include "CoreMinimal.h"
#include "ResourceLock.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FResourceLock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bLocked;
    
public:
    FResourceLock();
};

