#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "TritonSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class TRITONRUNTIME_API UTritonSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath TritonDataPath;
    
    UTritonSettings();
};

