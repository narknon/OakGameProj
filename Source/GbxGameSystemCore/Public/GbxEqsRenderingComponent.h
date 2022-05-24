#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSRenderingComponent.h"
#include "EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "EnvQueryParamsProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEqsTraceDrawMode -FallbackName=EEqsTraceDrawMode
#include "EnvQueryParams.h"
#include "GbxEqsRenderingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxEqsRenderingComponent : public UEQSRenderingComponent, public IEQSQueryResultSourceInterface, public IEnvQueryParamsProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    bool bExecuteQuery;
    
    UPROPERTY(EditAnywhere)
    EEqsTraceDrawMode TraceDrawMode;
    
    UPROPERTY(EditAnywhere)
    FString ExternalQueryParams;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams EnvQueryParams;
    
    UGbxEqsRenderingComponent();
    UFUNCTION()
    void GetAvailableEnvQueryParamRefNames(TArray<FString>& Names) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

