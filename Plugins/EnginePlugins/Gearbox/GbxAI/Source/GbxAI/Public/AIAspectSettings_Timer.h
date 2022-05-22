#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_Timer.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Timer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CanStartWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCanStartWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam SpawnedWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSpawnedWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CombatStartedWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCombatStartedWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam TargetChangedWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTargetChangedWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam SucceededCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSucceededCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam FailedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFailedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam AbortedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAbortedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam SucceedTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSucceedTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam FailTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFailTimeLimit;
    
    FAIAspectSettings_Timer();
};

