#pragma once
#include "CoreMinimal.h"
#include "SingularityInitializationBase.h"
#include "UObject/NoExportTypes.h"
#include "SingularityBurstInfo.generated.h"

class UExplosionData;

USTRUCT(BlueprintType)
struct FSingularityBurstInfo : public FSingularityInitializationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SingularityLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPullRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SingularityForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UExplosionData* SingularityExplosion;
    
    OAKGAME_API FSingularityBurstInfo();
};

