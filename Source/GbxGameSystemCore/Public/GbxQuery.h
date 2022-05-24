#pragma once
#include "CoreMinimal.h"
#include "EnvQueryParams.h"
#include "GbxQueryOptions.h"
#include "GbxQuery.generated.h"

class AActor;
class UBlackboardComponent;
class UNavComponent;

USTRUCT(BlueprintType)
struct FGbxQuery {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Owner;
    
    UPROPERTY()
    FEnvQueryParams Params;
    
    UPROPERTY()
    FGbxQueryOptions Options;
    
    UPROPERTY()
    AActor* PrimaryContext;
    
    UPROPERTY(Export)
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(Export)
    UNavComponent* NavComp;
    
    GBXGAMESYSTEMCORE_API FGbxQuery();
};

