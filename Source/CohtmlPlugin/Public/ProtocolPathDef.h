#pragma once
#include "CoreMinimal.h"
#include "ProtocolPathDef.generated.h"

USTRUCT(BlueprintType)
struct FProtocolPathDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Protocol;
    
    UPROPERTY(EditAnywhere)
    FString RootPath;
    
    UPROPERTY(EditAnywhere)
    FString RelativePrefix;
    
    UPROPERTY(EditAnywhere)
    FString WatcherPrefix;
    
    COHTMLPLUGIN_API FProtocolPathDef();
};

