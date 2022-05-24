#pragma once
#include "CoreMinimal.h"
#include "DialogBlackboard.h"
#include "EchoLogTrackingInfo.h"
#include "OnEchoLogInitialPlayFinishedDelegate.h"
#include "DialogScriptPinnedRef.h"
#include "OakDialogBlackboard.generated.h"

class UEchoLogData;

UCLASS(BlueprintType)
class UOakDialogBlackboard : public UDialogBlackboard {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UEchoLogData*> TrackingEchoLogs;
    
    UPROPERTY(Transient)
    TMap<UEchoLogData*, FEchoLogTrackingInfo> OnTrackedEchoLogFinishedEvents;
    
    UPROPERTY(Transient)
    TArray<FDialogScriptPinnedRef> PinnedScripts;
    
    UOakDialogBlackboard();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BindEchoLogInitialPlayFinished(UEchoLogData* EchoLogData, FOnEchoLogInitialPlayFinished Event);
    
};

