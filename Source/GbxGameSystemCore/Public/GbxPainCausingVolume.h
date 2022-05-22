#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PainCausingVolume.h"
#include "AttributeInitializationData.h"
#include "GbxPainCausingVolume.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API AGbxPainCausingVolume : public APainCausingVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData GbxDamagePerSec;
    
    AGbxPainCausingVolume();
};

