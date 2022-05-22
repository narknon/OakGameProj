#pragma once
#include "CoreMinimal.h"
#include "EnvQueryParams.h"
#include "EGbxQueryPreset.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "GbxQueryOptions.h"
#include "AIAspectSettings_EnvQuery.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_EnvQuery {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEnvQueryParams Query;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector QueryBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    bool bRefreshAITreeOnQuerySuccess;
    
    UPROPERTY(EditAnywhere)
    bool bForceRequeryOnSuccess;
    
    UPROPERTY(EditAnywhere)
    bool bClearQueryOnSuccess;
    
    UPROPERTY(EditAnywhere)
    FGbxQueryOptions Options;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGbxQueryPreset> Preset;
    
    UPROPERTY(EditAnywhere)
    bool bUsePreset;
    
    UPROPERTY()
    FGbxParam QueryPeriod;
    
    UPROPERTY()
    bool bQueryContinuously;
    
    UPROPERTY()
    bool bUpdateValueWhileRunning;
    
    UPROPERTY()
    bool bKeepValidValues;
    
    UPROPERTY()
    bool bCanUseSelf;
    
    UPROPERTY()
    float UseSelfDistance;
    
    UPROPERTY()
    bool bSucceedIfHasValue;
    
    UPROPERTY()
    bool bMigrated;
    
    FAIAspectSettings_EnvQuery();
};

