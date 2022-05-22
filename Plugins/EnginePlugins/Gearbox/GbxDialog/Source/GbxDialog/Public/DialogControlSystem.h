#pragma once
#include "CoreMinimal.h"
#include "DialogThread.h"
#include "UObject/Object.h"
#include "QuietTimeTracker.h"
#include "DialogControlSystem.generated.h"

class UWorld;
class UDialogBlackboard;
class UDialogLookupSystem;
class UGbxDialogSettings;

UCLASS()
class GBXDIALOG_API UDialogControlSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FDialogThread> DialogThreads;
    
    UPROPERTY()
    TArray<FQuietTimeTracker> ActiveQuietTimes;
    
    UPROPERTY(Transient)
    UDialogLookupSystem* LookupSystem;
    
    UPROPERTY(Transient)
    UDialogBlackboard* Blackboard;
    
    UPROPERTY(Transient)
    UGbxDialogSettings* Settings;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(Transient)
    bool bFakePauseMode;
    
    UPROPERTY(Transient)
    bool bInCinematicMode;
    
    UPROPERTY(Transient)
    double PauseModeLastFrameTime;
    
    UDialogControlSystem();
};

