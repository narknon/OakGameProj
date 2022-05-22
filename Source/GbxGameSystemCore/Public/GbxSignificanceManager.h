#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "CachedInterp.h"
#include "GbxSignificanceManager.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, Transient)
    TArray<FCachedInterp> WeightInterps;
    
    UPROPERTY(Config, Transient)
    TArray<FCachedInterp> BucketInterps;
    
public:
    UGbxSignificanceManager();
};

