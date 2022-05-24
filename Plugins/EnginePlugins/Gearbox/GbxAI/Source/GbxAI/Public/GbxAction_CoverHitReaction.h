#pragma once
#include "CoreMinimal.h"
#include "CoverHitReactionItem.h"
#include "GbxAction_SimpleAnim.h"
#include "GbxAction_CoverHitReaction.generated.h"

UCLASS()
class GBXAI_API UGbxAction_CoverHitReaction : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FCoverHitReactionItem> Styles;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
public:
    UGbxAction_CoverHitReaction();
};

