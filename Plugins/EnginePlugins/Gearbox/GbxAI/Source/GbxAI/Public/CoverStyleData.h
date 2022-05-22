#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ECoverStyleAnimType.h"
#include "CoverStyleData.generated.h"

class UCoverViewData;

UCLASS(BlueprintType)
class GBXAI_API UCoverStyleData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECoverStyleAnimType AnimType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    UCoverViewData* View;
    
    UPROPERTY(EditAnywhere)
    bool bAllowLookAts;
    
    UPROPERTY(EditAnywhere)
    bool bAllowAimOffsets;
    
    UPROPERTY(EditAnywhere)
    bool bForceFiring;
    
    UCoverStyleData();
};

