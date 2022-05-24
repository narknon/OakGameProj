#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "ECheckpointWidgetState.h"
#include "GFxCheckpointWidget.generated.h"

class UGbxGFxObject;
class UGbxTextField;

UCLASS()
class UGFxCheckpointWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumCheckpointIdleLoops;
    
private:
    UPROPERTY(Transient)
    ECheckpointWidgetState CurrentState;
    
    UPROPERTY(Transient)
    ECheckpointWidgetState NextState;
    
    UPROPERTY(Transient)
    int32 CheckpointLoopsRemaining;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InnerClip;
    
    UPROPERTY(Transient)
    UGbxTextField* CheckpointTextClip;
    
public:
    UGFxCheckpointWidget();
private:
    UFUNCTION()
    void PlayCheckpointAnimation() const;
    
    UFUNCTION()
    void AnimationComplete(const FString& AnimationName) const;
    
};

