#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxReportTag.h"
#include "GbxReportTags.generated.h"

UCLASS(Config=GbxPerfAnalytics)
class UGbxReportTags : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TArray<FGbxReportTag> Tags;
    
    UGbxReportTags();
};

