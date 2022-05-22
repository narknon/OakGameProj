#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAction_Sequence.h"
#include "AIAction_TargetSequence.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_TargetSequence : public UAIAction_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam TargetCountMin;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetCountMin;
    
    UPROPERTY(EditAnywhere)
    FGbxParam TargetCountMax;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetCountMax;
    
    UPROPERTY(EditAnywhere)
    FGbxParam TargetDistance;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetDistance;
    
    UPROPERTY(EditAnywhere)
    bool bPlayersOnly;
    
    UAIAction_TargetSequence();
};

