#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "MissionTrackerSlotController.generated.h"

class UWidgetAnimation;
class UUserWidget;

UCLASS(EditInlineNew)
class UMissionTrackerSlotController : public UGbxUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionTrackerAnimationEvent, UUserWidget*, Widget, const UWidgetAnimation*, WidgetAnimation);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMissionTrackerAnimationEvent OnCompleteAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UWidgetAnimation* CompleteAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UWidgetAnimation* CheckedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UWidgetAnimation* AddAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UWidgetAnimation* BaseAnimation;
    
    UMissionTrackerSlotController();
    UFUNCTION(BlueprintImplementableEvent)
    void SetObjectiveDescription(const FText& ObjectiveText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetAnimations();
    
    UFUNCTION(BlueprintImplementableEvent)
    FText GetObjectiveDescription();
    
};

