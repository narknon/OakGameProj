#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AsyncExplosionImpactRequest.h"
#include "AsyncExplosionImpactManager.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UAsyncExplosionImpactManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FAsyncExplosionImpactRequest> AsyncRequests;
    
public:
    UAsyncExplosionImpactManager();
};

