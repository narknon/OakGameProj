#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxSingletons.generated.h"

class UAsyncExplosionImpactManager;
class UGbxFeedbackManager;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxSingletons : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAsyncExplosionImpactManager* ExplosionImpactManager;
    
    UPROPERTY(Transient)
    UGbxFeedbackManager* FeedbackManager;
    
public:
    UGbxSingletons();
};

