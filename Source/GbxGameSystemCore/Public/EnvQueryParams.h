#pragma once
#include "CoreMinimal.h"
#include "GbxNamedParam.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxSignificance -FallbackName=GbxSignificance
#include "EnvQueryParams.generated.h"

class UEnvQuery;
class UEnvQueryTest;
class UEnvQueryTestAsset;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FEnvQueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UEnvQuery* Query;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UEnvQueryTest*> AdditionalTests;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnvQueryTestAsset*> AdditionalTestAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY()
    bool bDisableRunModeEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear)
    TArray<FGbxNamedParam> Contexts;
    
    UPROPERTY()
    bool bDisableContextEditing;
    
    UPROPERTY()
    bool bAllowEmptyContexts;
    
    UPROPERTY(Transient)
    TMap<UClass*, int32> ContextTypeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear)
    TArray<FGbxNamedParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<GbxSignificance::Type> RequiredSignificanceRating;
    
    FEnvQueryParams();
};

