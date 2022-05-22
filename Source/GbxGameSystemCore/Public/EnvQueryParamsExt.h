#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnvQueryParams.h"
#include "UObject/NoExportTypes.h"
#include "EnvQueryParamsExt.generated.h"

class UObject;
class AActor;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UEnvQueryParamsExt : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnvQueryParamsExt();
    UFUNCTION(BlueprintCallable)
    static bool RunEnvQueryForBestLocation(UObject* QueryOwner, const FEnvQueryParams& QueryParams, FVector& ResultLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool RunEnvQueryForBestActor(UObject* QueryOwner, const FEnvQueryParams& QueryParams, AActor*& ResultActor);
    
    UFUNCTION(BlueprintCallable)
    static bool RunEnvQueryForAllLocations(UObject* QueryOwner, const FEnvQueryParams& QueryParams, TArray<FVector>& ResultLocations);
    
    UFUNCTION(BlueprintCallable)
    static bool RunEnvQueryForAllActors(UObject* QueryOwner, const FEnvQueryParams& QueryParams, TArray<AActor*>& ResultActors);
    
    UFUNCTION(BlueprintPure)
    static bool HasQuery(const FEnvQueryParams& QueryParams);
    
    UFUNCTION(BlueprintPure)
    static FString GetDescription(const FEnvQueryParams& QueryParams);
    
};

