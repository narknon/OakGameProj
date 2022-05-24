#pragma once
#include "CoreMinimal.h"
#include "GbxDialogDataAsset.h"
#include "GbxTriggerProperty.h"
#include "ETimeSlotEchoPreference.h"
#include "DialogTimeSlotReference.h"
#include "DialogDecisionTree.h"
#include "DialogTimeSlotData.generated.h"

class UDialogLineData;
class UDialogParameter;

UCLASS(EditInlineNew)
class GBXDIALOG_API UDialogTimeSlotData : public UGbxDialogDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerPreviewAudio;
    
    UPROPERTY(EditAnywhere)
    TArray<FDialogTimeSlotReference> CompositeAudioAdditionalTimeSlots;
    
    UPROPERTY(EditAnywhere)
    ETimeSlotEchoPreference EchoPreference;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UDialogParameter*> Parameters;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UDialogLineData*> Lines;
    
    UPROPERTY(EditAnywhere)
    FDialogDecisionTree DecisionTree;
    
    UDialogTimeSlotData();
    UFUNCTION()
    void PreviewAudio();
    
};

