#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxPerfScopeOptions.generated.h"

UCLASS()
class GBXPERFSCOPE_API UGbxPerfScopeOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString AnalyticsURL;
    
    UGbxPerfScopeOptions();
};

