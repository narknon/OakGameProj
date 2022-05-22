#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxTestContentAuditSettings.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class UGbxTestContentAuditSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> WhitelistDirectories;
    
    UGbxTestContentAuditSettings();
};

