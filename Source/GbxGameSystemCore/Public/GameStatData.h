#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GameStatData.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGameStatData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 DefaultValue;
    
    UPROPERTY(EditAnywhere)
    int32 MinValue;
    
    UPROPERTY(EditAnywhere)
    bool bHasMinValue;
    
    UPROPERTY(EditAnywhere)
    int32 MaxValue;
    
    UPROPERTY(EditAnywhere)
    bool bHasMaxValue;
    
    UPROPERTY(EditAnywhere)
    FText StatName;
    
    UPROPERTY(EditAnywhere)
    bool bProfileStat;
    
    UPROPERTY(EditAnywhere)
    bool bPartyStat;
    
    UGameStatData();
};

