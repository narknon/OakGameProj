#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxQuery.h"
#include "GbxQueryManager.generated.h"

class UWorld;
class UEnvQueryManager;
class AActor;

UCLASS(DefaultConfig, Config=Game)
class GBXGAMESYSTEMCORE_API UGbxQueryManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    int32 MaxActiveQueries;
    
    UPROPERTY(Transient)
    TArray<FGbxQuery> Queries;
    
    UPROPERTY(Transient)
    UWorld* World;
    
    UPROPERTY(Transient)
    UEnvQueryManager* EnvQueryManager;
    
public:
    UGbxQueryManager();
    UFUNCTION()
    void NotifyAIHotSpotListChangedFor(AActor* OwnerActor);
    
};

