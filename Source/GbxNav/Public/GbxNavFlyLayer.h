#pragma once
#include "CoreMinimal.h"
#include "GbxNavLayer.h"
#include "EGbxNavFlyRoundingMode.h"
#include "GbxNavFlyLayer.generated.h"

UCLASS()
class GBXNAV_API UGbxNavFlyLayer : public UGbxNavLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float MaxAgentRadius;
    
    UPROPERTY(EditAnywhere)
    float CellWidth;
    
    UPROPERTY(EditAnywhere)
    EGbxNavFlyRoundingMode RoundingMode;
    
public:
    UGbxNavFlyLayer();
};

