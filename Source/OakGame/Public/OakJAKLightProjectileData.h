#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakLightProjectileData.h"
#include "OakJAKFeedbackData.h"
#include "RelativeDirectionData.h"
#include "EnvQueryParams.h"
#include "OakJAKLightProjectileData.generated.h"

class ULightProjectileData;

UCLASS()
class UOakJAKLightProjectileData : public UOakLightProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ModCooldownTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakJAKFeedbackData> StackLevelFeedback;
    
    UPROPERTY(EditAnywhere)
    FOakJAKFeedbackData RefundAmmoFeedback;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams RicochetQueryParams;
    
    UPROPERTY(EditAnywhere)
    bool bRandomizeRicochetQueryResults;
    
    UPROPERTY(EditAnywhere)
    FRelativeDirectionData NoTargetRicochetDirection;
    
    UPROPERTY(EditAnywhere)
    FOakJAKFeedbackData RicochetFeedback;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULightProjectileData> RicochetProjectileData;
    
    UOakJAKLightProjectileData();
};

