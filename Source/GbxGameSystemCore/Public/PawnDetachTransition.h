#pragma once
#include "CoreMinimal.h"
#include "PawnAttachmentTransition.h"
#include "UObject/NoExportTypes.h"
#include "PawnDetachTransition.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPawnDetachTransition : public FPawnAttachmentTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bValidateDetachLocation;
    
    UPROPERTY(EditAnywhere)
    float ValidationMaxOffset;
    
    UPROPERTY(EditAnywhere)
    float ValidationToleranceSize;
    
    UPROPERTY(EditAnywhere)
    bool bComputeDetachLocationFromAction;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteDetachLocation;
    
    UPROPERTY(EditAnywhere)
    FVector DetachLocationOffset;
    
    FPawnDetachTransition();
};

