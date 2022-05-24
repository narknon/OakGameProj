#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SmartObjectPreviewState.h"
#include "PreviewComponent.h"
#include "GbxTriggerProperty.h"
#include "ECycleDirection.h"
#include "SmartObjectPreviewComponent.generated.h"

class UGbxAction;
class UGbxActionComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API USmartObjectPreviewComponent : public UPreviewComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<FSmartObjectPreviewState> PreviewList;
    
    UPROPERTY(Transient)
    int32 ActiveAISlotIdx;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TSubclassOf<UGbxAction> PreviewAction;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bAutoCycle;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty CycleActor;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bShowAction;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bRepeatAction;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty ReplayAction;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UGbxActionComponent> ActionComponent;
    
public:
    USmartObjectPreviewComponent();
private:
    UFUNCTION()
    void OnReplayAction();
    
    UFUNCTION()
    void OnCycleActor(ECycleDirection Direction);
    
};

