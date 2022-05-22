#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "PerformanceEchoDataBase.generated.h"

UCLASS(Abstract)
class GBXDIALOG_API UPerformanceEchoDataBase : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPerformanceEchoDataBase();
};

