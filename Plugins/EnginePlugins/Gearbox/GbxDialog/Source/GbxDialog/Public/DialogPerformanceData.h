#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDialogDataAsset.h"
#include "GbxTriggerProperty.h"
#include "DialogPerformanceNotify.h"
#include "EGbxDialogQuietTimeScope.h"
#include "UObject/NoExportTypes.h"
#include "DialogPerformanceData.generated.h"

class UWwiseEvent;
class UGbxAction;
class UDialogStyle;
class UPerformanceEchoDataBase;

UCLASS(EditInlineNew)
class GBXDIALOG_API UDialogPerformanceData : public UGbxDialogDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerPlayWwiseEventPreview;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseExternalMediaTemplate;
    
    UPROPERTY(EditAnywhere)
    float EstimatedDuration;
    
    UPROPERTY(EditAnywhere)
    uint32 WwiseEventShortID;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Action;
    
    UPROPERTY(EditAnywhere)
    float ActionWeight;
    
    UPROPERTY(EditAnywhere)
    FName MoodName;
    
    UPROPERTY(EditAnywhere)
    float MoodWeight;
    
    UPROPERTY()
    bool bEnableEarlyFinish;
    
    UPROPERTY(EditAnywhere)
    float EarlyFinishTimeFraction;
    
    UPROPERTY(EditAnywhere)
    TArray<FDialogPerformanceNotify> Notifies;
    
    UPROPERTY(EditAnywhere)
    UDialogStyle* Style;
    
    UPROPERTY(EditAnywhere)
    float OutputDelay;
    
    UPROPERTY(EditAnywhere)
    float ChanceToPlay;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval QuietTime;
    
    UPROPERTY(EditAnywhere)
    EGbxDialogQuietTimeScope QuietTimeScope;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval DialogKindCooldownTime;
    
    UPROPERTY(EditAnywhere)
    UPerformanceEchoDataBase* EchoData;
    
    UDialogPerformanceData();
    UFUNCTION()
    void PlayWwiseEventPreview();
    
};

