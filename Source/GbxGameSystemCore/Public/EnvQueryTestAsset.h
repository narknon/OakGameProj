#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EnvQueryTestAsset.generated.h"

class UEnvQueryTest;

UCLASS()
class UEnvQueryTestAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UEnvQueryTest* EnvQueryTest;
    
    UEnvQueryTestAsset();
};

