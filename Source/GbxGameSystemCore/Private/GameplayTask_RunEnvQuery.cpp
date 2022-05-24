#include "GameplayTask_RunEnvQuery.h"

class UGameplayTask_RunEnvQuery;
class AActor;

UGameplayTask_RunEnvQuery* UGameplayTask_RunEnvQuery::RunEnvQueryOnLocation(AActor* QueryOwner, const FEnvQueryParams& QueryParams, FVector Location) {
    return NULL;
}

UGameplayTask_RunEnvQuery* UGameplayTask_RunEnvQuery::RunEnvQueryOnActor(AActor* QueryOwner, const FEnvQueryParams& QueryParams, AActor* Actor) {
    return NULL;
}

UGameplayTask_RunEnvQuery* UGameplayTask_RunEnvQuery::RunEnvQuery(AActor* QueryOwner, const FEnvQueryParams& QueryParams) {
    return NULL;
}

bool UGameplayTask_RunEnvQuery::GetResultLocations(const FEnvQueryResult& QueryResult, TArray<FVector>& ResultLocations) {
    return false;
}

bool UGameplayTask_RunEnvQuery::GetResultLocation(const FEnvQueryResult& QueryResult, FVector& ResultLocation) {
    return false;
}

bool UGameplayTask_RunEnvQuery::GetResultActors(const FEnvQueryResult& QueryResult, TArray<AActor*>& ResultActors) {
    return false;
}

bool UGameplayTask_RunEnvQuery::GetResultActor(const FEnvQueryResult& QueryResult, AActor*& ResultActor) {
    return false;
}

UGameplayTask_RunEnvQuery::UGameplayTask_RunEnvQuery() {
}

