#include "EnvQueryParamsExt.h"

class UObject;
class AActor;

bool UEnvQueryParamsExt::RunEnvQueryForBestLocation(UObject* QueryOwner, const FEnvQueryParams& QueryParams, FVector& ResultLocation) {
    return false;
}

bool UEnvQueryParamsExt::RunEnvQueryForBestActor(UObject* QueryOwner, const FEnvQueryParams& QueryParams, AActor*& ResultActor) {
    return false;
}

bool UEnvQueryParamsExt::RunEnvQueryForAllLocations(UObject* QueryOwner, const FEnvQueryParams& QueryParams, TArray<FVector>& ResultLocations) {
    return false;
}

bool UEnvQueryParamsExt::RunEnvQueryForAllActors(UObject* QueryOwner, const FEnvQueryParams& QueryParams, TArray<AActor*>& ResultActors) {
    return false;
}

bool UEnvQueryParamsExt::HasQuery(const FEnvQueryParams& QueryParams) {
    return false;
}

FString UEnvQueryParamsExt::GetDescription(const FEnvQueryParams& QueryParams) {
    return TEXT("");
}

UEnvQueryParamsExt::UEnvQueryParamsExt() {
}

