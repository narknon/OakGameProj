#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "DialogMoodInfo.h"
#include "DialogNameTagMoodData.generated.h"

UCLASS()
class GBXDIALOG_API UDialogNameTagMoodData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FDialogMoodInfo> MoodData;
    
    UDialogNameTagMoodData();
};

