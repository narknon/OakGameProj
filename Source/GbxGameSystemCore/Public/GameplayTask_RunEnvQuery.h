#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EnvQueryTaskEndedDelegateDelegate.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvQueryParams.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTask_RunEnvQuery.generated.h"

class UGameplayTask_RunEnvQuery;
class AActor;

UCLASS()
class GBXGAMESYSTEMCORE_API UGameplayTask_RunEnvQuery : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnvQueryTaskEndedDelegate Success;
    
    UPROPERTY(BlueprintAssignable)
    FEnvQueryTaskEndedDelegate Failure;
    
    UGameplayTask_RunEnvQuery();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_RunEnvQuery* RunEnvQueryOnLocation(AActor* QueryOwner, const FEnvQueryParams& QueryParams, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_RunEnvQuery* RunEnvQueryOnActor(AActor* QueryOwner, const FEnvQueryParams& QueryParams, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_RunEnvQuery* RunEnvQuery(AActor* QueryOwner, const FEnvQueryParams& QueryParams);
    
    UFUNCTION(BlueprintCallable)
    static bool GetResultLocations(const FEnvQueryResult& QueryResult, TArray<FVector>& ResultLocations);
    
    UFUNCTION(BlueprintCallable)
    static bool GetResultLocation(const FEnvQueryResult& QueryResult, FVector& ResultLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool GetResultActors(const FEnvQueryResult& QueryResult, TArray<AActor*>& ResultActors);
    
    UFUNCTION(BlueprintCallable)
    static bool GetResultActor(const FEnvQueryResult& QueryResult, AActor*& ResultActor);
    
};

